#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

#define BUFFERSIZE 256
int main(int argc, char *argv[]){

	time_t start;
	time_t stop;
	struct tm *today;
	struct tm ptoday;
	struct tm pdone;
	time_t myBirthday;
	struct tm *bd;
	struct tm pbd;
	struct tm askdate;
	int month, day, year;
	char buf[80];
	char dow[10];
	struct timespec tv;
	char timeStringStart[BUFFERSIZE] = {0};
	char timeStringEnd[BUFFERSIZE]= {0};
	time_t  epochToHuman;
	struct tm ts;

	// tracking time from the start of the program
	start = time(NULL);
	today = localtime(&start);
	ptoday = *localtime(&start);
	printf("\nStart date and time of program: %i/%i/%i epoch = %i\n\n", today->tm_mon+1, today->tm_mday, today->tm_year+1900, start);

	// create date and time with nanoseconds to print		
	clock_gettime(CLOCK_REALTIME, &tv);
	struct tm *timePointerStart = localtime(&tv.tv_sec);
	size_t nbyte = strftime(timeStringStart, BUFFERSIZE, "%B %e, %G %T", timePointerStart);
	snprintf(timeStringStart + nbyte, sizeof(timeStringStart) - nbyte, "%.9ld", tv.tv_nsec);
	// print time tracking from start of program
	printf("%s\n\n", timeStringStart);
;
	printf("Epoch time is a UNIX date and time representation widely used in computing measured by the number of nanoseconds passed since 00:00:00 UTC on 1 January, 1970, the beginning of Linux Epoch.\n\n");
 
	// print time and date the Myers way 
	// strftime(buf, sizeof(buf), "Date & Time: %a %Y-%m-%d %H:%M:%S%Z \n\n", &ptoday);
	// printf("%s\n", buf);
	
	char response[20];
	printf("Hey, do you know your birthday in epoch time? ");
	scanf("%s", &response);

	switch(response[0]){
		case 'y':
		case 'Y':
			printf("\nPlease enter your epoch time birthday:\n\n");
			scanf("%i", &epochToHuman);
			// storing entered epoch birthday and printing it
			ts = *localtime(&epochToHuman);
			strftime(buf, sizeof(buf), "%a %Y-%m-%d %H:%M:%S %Z", &ts);
			printf("%s\n", buf);
			break;
		case 'n':
		case 'N':
			printf("\nPlease enter your birthdate in this format: MM/DD/YYYY\n\n");
			scanf("%d/%d/%d", &month, &day, &year);
			// fill askdate struct with scanf data
			askdate.tm_mon = month-1;
			askdate.tm_mday = day;
			askdate.tm_year = year - 1900;

			// convert to epoch time
			myBirthday = mktime(&askdate);	
			bd = gmtime(&myBirthday);
			pbd = *gmtime(&myBirthday);
			printf("\nIn epoch time, that is: %ld\n", myBirthday);
			strftime(buf, sizeof(buf), "The date you entered, %B %d, %Y, was on a %A.\n", &askdate);
			printf("%s\n", buf);
			strftime(buf, sizeof(buf), "\nThis was day #%j of that year.", &askdate);
			printf("%s\n", buf);
			strftime(buf, sizeof(buf), "I was born on a %A", &pbd);
			printf("%s\n", buf);
			strftime(buf, sizeof(buf), "%A", &pbd);
			break;

	} // end switch
	// tracking time from the start of the program
	stop = time(NULL);
	today = localtime(&stop);
	ptoday = *localtime(&stop);
	printf("\nEnd date and time of program: %i/%i/%i epoch = %i\n\n", today->tm_mon+1, today->tm_mday, today->tm_year+1900, stop);

	clock_gettime(CLOCK_REALTIME, &tv);
	struct tm *timePointerEnd = localtime(&tv.tv_sec);
	size_t nbytes = strftime(timeStringEnd, BUFFERSIZE, "%B %e, %G %T", timePointerEnd);
	snprintf(timeStringEnd + nbytes, sizeof(timeStringEnd) - nbytes, "%.9ld", tv.tv_nsec);
	// print time tracking from start of program
	printf("%s\n\n", timeStringEnd);
	return 0;
}
