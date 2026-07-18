#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


int main (int argc, char *argv[]){

	// variable index is the index of the argv array in this program
	//enter command line argument into number variable and checking if number is greater than 10.	
	
	int number, index, remainder, sumofNumAndRev, reversed = 0;
	
	// if argc has no input
	if (argc < 1) {
		printf("Sorry, number is missing. Please enter a number greater than 10.");
		exit(0);
	}
	// exit if number is less than 11 (not greater than 10)
	if (number < 10) {
		printf("Sorry, that number is too low. Please enter a number greater than 10.");
		exit(0);
	}
	if (number >= INT_MAX) {
		printf("Sorry, but that number is out of bounds.");
		exit(0);
	}else {
		// store index of argv to number if number is greater than 10
		for (index = 1; index < argc; index++){
			number = atoi(argv[index]);
			printf("\n%d is the number you entered.", number);
			printf(" Thank you, this number is greater than or equal to 10. \n\n");
	
			while (number != 0) {
				remainder = number % 10;
				reversed = reversed * 10 + remainder;
				number /= 10;
			}
			sumofNumAndRev = number + remainder;	
		printf("%d is the sum of your input + itself reversed.\n", sumofNumAndRev);
		}
		/*while (number != 0) {
			remainder = number % 10;
			reversed = reversed * 10 + remainder;
			number /= 10;
		}*/
		printf("Reversed, that is %d", reversed);
	} // end for loop adding CLA to number variable
	return 0;
} // end main
