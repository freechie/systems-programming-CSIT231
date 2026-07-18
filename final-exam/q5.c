#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
// the variable "guessme" is the one and only argument on the command line
// the variable "guesscount" is the number of guesses you have made so far
// the variable "guess" is the number that is accepted by the player
int guessme=atoi(argv[1]);
int guesscount = 0;
int guess;

// check if guessme is within the range of 1 to 100
if (guessme>100 || guessme<1)
{
printf("I'm sorry but you did not enter a number between 1 and 100\n");
exit(1);
}

// loop until the correct guess is made
while (1)
{
// get the guess from the user
printf("Enter your guess: ");
scanf("%d", &guess);

// increment the guess count
guesscount++;

// check if the guess is correct and break out of the loop if it is
if (guess == guessme)
{
  break;
}
// if the guess is not correct, tell the user if their guess is too high or too low
else if (guess > guessme)
{
  printf("Your guess is too high.\n");
}
else
{
  printf("Your guess is too low.\n");
}
}

// print the number of guesses it took to get the correct answer
printf("You got it in %d tries!\n", guesscount);

return 0;

//PLEASE PUT YOUR CODE BELOW THIS COMMENT
//PLEASE PUT YOUR CODE BELOW THIS COMMENT

}
