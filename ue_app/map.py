from fastapi import FastAPI, Request
from fastapi.staticfiles import StaticFiles
from fastapi.responses import HTMLResponse, JSONResponse
from fastapi.templating import Jinja2Templates
from pydantic import BaseModel
import json
import threading
import uvicorn
import mapboxgl
import sqlite3

app = FastAPI()
app.mount("/static", StaticFiles(directory="static"), name="static")

templates = Jinja2Templates(directory="templates")

# Initialize Mapbox map
@app.get("/", response_class=HTMLResponse)
def get_map(request:Request):
    return templates.TemplateResponse("index.html", {
        "request": request,
    })

@app.get("/locations")
def get_location():
    db = sqlite3.connect('locations.db')
    cursor  = db.cursor()
    cursor.execute('''
                   SELECT user_id, latitude, longitude, MAX(timestamp) as last_timestamp
                   FROM location_data
                   GROUP BY user_id
                    ''')
    data = cursor.fetchall()
    db.close()

    locations = {}
    for row in data:
        user_id, latitude, longitude, _ = row
        locations[user_id] = {
            "latitude": latitude,
            "longitude": longitude
        }

    return JSONResponse(content=locations)

# Run the FastAPI application
if __name__ == "__main__":
    uvicorn.run("map:app", host="0.0.0.0", port=8000, reload=True)