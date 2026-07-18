#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

// Global counter to keep track of how many times Ctrl-C has been pressed
int ctrl_c_count = 0;

// Function to be called when Ctrl-C is pressed
void CtrlC(int sig)
{
    ctrl_c_count++;

    if (ctrl_c_count < 5) {
        // Print "OW, Quit it" and return
        printf("OW, Quit it\n");
        return;
    }

    // If Ctrl-C has been pressed 5 times, exit the program
    exit(0);
}

int main(void)
{
    // Set CtrlC as the function to be called when the Ctrl-C signal is received
    signal(SIGINT, CtrlC);

    // Your program code here

    return 0;
}

