#!/bin/bash

echo "Enter the number A:"
read numA
echo "Enter the number B:"
read numB

sum=$(($numA+$numB))
product=$(($numA*$numB))

if [ "$sum" -gt "$product" ]
then
    echo "The sum is greater than the product!"
elif [[ "$sum" == "$product" ]]
then
    echo "The sum is equal than the product!"
elif [ "$sum" -lt "$product" ]
then
    echo "The sum is less than the product!"
fi

echo "$numA + $numB = $sum"
echo "$numA * $numB = $product"