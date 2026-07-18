#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include<signal.h>
#include <time.h>
#include <ctype.h>

// Call the create_timestamped_file function
void create_timestamped_file();
//for the ctrlc
void ctrlc(int);
//for the crtlz 
void ctrlz(int);
//for the exit keyword
void exitproc(int);

//input of user(global var) 
int fd1;
//for the conversations back and forth (global var)
char str1[80], str2[80];
//fifo we are using for chat
char *myfifo="/tmp/rojasc8.fifo";
int main()
{

    //the hello we are comparing	
    char comp[] = "HELLO";
    //capitalized copy
    char cap[100];
    // Creating the named file(FIFO) 
    // mkfifo(<pathname>,<permission>) 
    mkfifo(myfifo, 0666);
//system we are working with
    system("ls -al /tmp/rojas8.fifo\n" );
//PID for manuel kill
    printf("PID: %i\n", getpid());
//overrides ctrl c 
    signal(SIGINT,ctrlc);
//overrides ctrlz
    signal(SIGTSTP, ctrlz);
//overrides kill comand with exit keyword
    signal(SIGTERM, exitproc);
    while (1)
    {
	//opens fifo (read only)
        fd1 = open(myfifo,O_RDONLY);
	//stores into str1
        read(fd1, str1, 80);
	
        // Print the string sent from user2 
        printf("User2(friend): %s\n", str1);
        //converts the text all caps
	for(int i=0; i<5;i++){
		if(str1[i] >= 'a' && str1[i] <= 'z'){
			cap[i] = str1[i]-32;
		}
	}
	//temp is the comparions value for checking 
	int temp = strcmp(cap,comp);
//	printf("CAP: %s",cap);
//	printf("strmp: %i\n",temp);
//	if Hello matches the input we make alarm beep
	if(strcmp(cap,comp) == 0){
	//	printf("BEEP");
	//	this is the alarm rings five times 
		for(int count=0;count<5;count++){
			printf("\a");
			printf("WAKEUP!!!!!\n");
			sleep(1);
		}
	}

//	printf("UPPERCASE: %s\n",str1);
        close(fd1);
    }
    return 0;
}
//ctrlc converts for response
void ctrlc(int sig){
	printf("User1(me): ");
	//opens for write so user can write to friend
	fd1 = open(myfifo,O_WRONLY);
	//used for input
        fgets(str2, 80, stdin);
	//stores to str2
        write(fd1, str2, strlen(str2)+1);
	//closes fd1
        close(fd1);
}
//instead of kill it sends reponse 
void ctrlz(int sig){
	srand(time(NULL));
	//three responses we want to send
        char words[3][20] = {"Yup!!!","uh-huh...","Absolutely"};
	//random function for picking out of these words
        int rando = rand()% 3;
	//made to pointer 
	char* word = words[rando];
       // printf(words[rando]);

	printf("User1(me): ");
	//open to write only
        fd1 = open(myfifo,O_WRONLY);
	//takes random picked worked and sents it to other line
        write(fd1, word, strlen(str2)+1);
	//closes for fd1
        close(fd1);
}
// kills using SIGTERM
void exitproc(int sig){
	printf("Sorry, not allowed to exit like this.\n");
	kill(getpid(),SIGSEGV);
}

void create_timestamped_file() {
  // Get the current time
  time_t rawtime;
  time(&rawtime);

  // Convert the time to a local time structure
  struct tm *timeinfo = localtime(&rawtime);

  // Create a string to hold the formatted timestamp
  char timestamp[128];

  // Use strftime to format the timestamp as a string
  strftime(timestamp, sizeof(timestamp), "%Y%m%d-%H%M%S", timeinfo);

  // Create the file name by concatenating the timestamp and ".txt"
  char filename[128];
  snprintf(filename, sizeof(filename), "%s.txt", timestamp);

  // Open the file for writing
  FILE *fp = fopen(filename, "w");
  fgets(str2, 80, stdin);
  //stores to str2
  write(fd1, str1, strlen(str1)+1);
  write(fd1, str2, strlen(str2)+1);

  if (fp == NULL) {
    // Handle the error
    // ...
  }

  // Do something with the file
  // ...

  // Close the file when you're done with it
  fclose(fp);
}
