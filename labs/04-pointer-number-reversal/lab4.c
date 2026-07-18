#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	int number, reverse, remainder;
	int *pNum, *pRev;


	for (int i = 1 ; i < argc; i++){	
		number = atoi(argv[i]);
	
		switch(number < 10) {
			
			case 1:
				printf("Sorry, that number is isn't greater than 10.");
				break;

			default:
				while (number != 0) {
					remainder = number % 10;
					reverse = (reverse * 10) + remainder;
					number /= 10;
				}
			
				pNum = &number;
				pRev = &reverse;

				printf("%d", *pNum);


				break;
		}
	}

}
