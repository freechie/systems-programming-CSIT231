# Lab 05 requirements: process race

> Paraphrased from archived course instructions. This describes the assignment,
> not a claim that the archived submission satisfies every requirement.

## Goal

Model a three-country 100-meter race with Unix child processes. The assignment
has two source files: `hundred.c` starts and monitors the racers, while `racer.c`
replaces each child process with the race behavior.

## `hundred.c`

1. Accept exactly three country names as command-line arguments and exit with a
   helpful message when too few are supplied.
2. Validate every country against a hard-coded structure array. Each entry must
   include its country, an athlete's first and last name, and a bib number.
3. Clear the terminal and print the starting sequence before creating racers.
4. Build a process-list command with `getpid` and `strcat`; use it before the
   race, while all racers are running, and after they finish.
5. Write a function that forks one racer. Pass it a random duration from four to
   seven seconds, the country, and the athlete's last name.
6. Call the function three times. Each child must use `execvp` to run `racer`.
7. Detect and report failed `fork` calls.
8. Wait for all children, show that only the parent remains, and print a final
   race-complete message.

## `racer.c`

1. Accept the duration, country, and athlete name passed by the parent.
2. Loop for the requested number of seconds, sleeping one second per iteration
   and reporting the athlete's progress each time.
3. Print a finish message containing the matching athlete and country.

Repeated runs should vary because each racer receives a randomized duration.
