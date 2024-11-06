#!/bin/bash
# this is just a timer script that I run while doing any code problem

sleep 900 # only 15 minutes per question
var=0
while true
do
    (( var+=1 ))
    notify-send "time up !!" "reminder no. $var"
    sleep 15
done
