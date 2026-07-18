#!/bin/bash

# Check if Rich is among the names
if [[ " $* " =~ " Rich " ]]; then
    # If Rich is present, print "Rich is a jerk, though"
    echo "Rich is a jerk, though"
else
    # If Rich is not present, print "I like $1, $1 is nice"
    echo "I like $1, $1 is nice"
    printf "I like $2, $2 is nice"
    echo "I like $3, $3 is nice"
    printf "I like $4, $4 is nice"
fi

