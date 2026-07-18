#!/bin/bash
startTime=$(date +%s%N) #start tracking time

echo "Epoch time is the number of seconds that have passed since 00:00:00 UTC on January 1, 1970, and is commonly used to represent specific points in time in computer systems and applications"
# continuously ask
while true; do

# take user input
echo "Do you know your birthday in epoch time?"
read maybeEpochBD

# switch case for user input
case $maybeEpochBD in
	Y|y|Yes|yes)
		echo "Please enter your birthday in epoch format."
		read userEpochBD
		echo "You entered: $userEpochBD"
		# convert epoch date entered by user into MM/DD/YYYY
		usrEpochDate=$(date -d @$userEpochBD +%m/%d/%Y)

		#display result of epoch to MM/DD/YYYY conversion
		echo "The conversion of the epoch date you entered is $usrEpochDate"
		break;;

	N|n|No|no)
		echo "Okay, no worries."
		echo "Please enter your birthday in the mm/dd/yyyy format."
		read noEpochBD
		
		# convert date to epoch
		epochTime=$(date -d "$noEpochBD" +%s%N)

		# get day of week of user given date
		dayOfWeek=$(date -d "$noEpochBD" +%A)

		# get day of year of user given date
		dayOfYr=$(date -d "$noEpochBD" +%j)

		# get start of day time of user given date
		startOfDay=$(date -d "$noEpochBD -1 day" +%s%N)

		# get midnight of user given date
		midnight=$(date -d "$noEpochBD 23:59:59" +%s%N)

		echo ""
		echo -e "The date you entered has been converted into epoch time as: $epochTime\n"
		
		echo "The date you entered is $noEpochBD on a $dayOfWeek and $dayOfYr-th day of the year. Depending on time, the epoch date was between -$startOfDay and -$midnight"

		# get current time after computations
		endTime=$(date +%s%N)
		
		# compute time elapsed running program using awk
		elapsedTime=$(awk "BEGIN {printf \"%.9f\n\", ($endTime - $startTime) / 1000000000}") 
		echo ""		
		# display time taken to complete
		echo "Time elapsed since the start of this program is: $elapsedTime seconds"
		echo ""
		break;;

	*) # if anything else entered into switch statement
		echo "Please enter 'Y', 'y', 'Yes', 'yes', 'N', 'n', 'No', 'no'"
		;;
esac
done
