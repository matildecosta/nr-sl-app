# Simple program to fetch all the locations from the database 
# and print on the terminal

import sqlite3

def fetch_all_locations():
    db = sqlite3.connect('locations.db')
    cur = db.cursor()

    # Retrieve all records
    cur.execute('SELECT * FROM location_data')
    rows = cur.fetchall()

    # Close connection
    db.close()
    
    return rows

locations = fetch_all_locations()
for location in locations:
    print(location)