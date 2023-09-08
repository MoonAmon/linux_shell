#!/bin/bash

today=$(date +%Y%m%d)
weather_report=raw_data_$today
city=london

curl wttr.in/$city --output $weather_report
grep °C $weather_report > tempetures.txt

obs_tmp=$(head -n 1 tempetures.txt | cut -d "^" -f 1 | cut -c 43,45)
echo "Temperatura atual: $obs_tmp °C"

tm_tmp=