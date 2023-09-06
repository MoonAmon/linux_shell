#!/bin/bash

echo "It is raining?"
echo -n "Enter \"y\" for yes, \"n\" for no"
read answer

if [ "$answer" == "y" ]
then
    echo "Don't forget the umbrella!"
elif [ "$answer" == "n" ]
then
    echo "Sunnyday ahead!"
else
    echo "Your response must be either 'y' or 'n'!"
    echo "Please re-run the script and read the instrutions!"
fi