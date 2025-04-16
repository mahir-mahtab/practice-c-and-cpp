import requests
import sys
import json


info=requests.get(f"https://itunes.apple.com/search?term=jack+johnson")
o=info.json()
for item in o["results"]:
    print(item["artistName"])
# print(json.dumps(info.json(),indent=1))