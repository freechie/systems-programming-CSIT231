# Lab 06 requirements: birthday and epoch time

> Paraphrased from archived course instructions. This describes the assignment,
> not a claim that the archived submission satisfies every requirement.

## Goal

Use the C `time.h` facilities to convert a birthday between calendar and Unix
epoch representations and measure the interaction's duration with nanosecond
precision.

## Required behavior

1. Name the source file `lab6.c` and capture the starting time, including
   nanoseconds, before interacting with the user.
2. Print a one-line explanation of Unix epoch time.
3. Ask whether the user knows their birthday in epoch form. Continue prompting
   until the response begins with `y` or `n`, regardless of case.
4. For a yes response, read an epoch timestamp and convert it to a calendar date
   in `mm/dd/yyyy` form.
5. For a no response, read one date in `mm/dd/yyyy` form and convert it to epoch
   time.
6. Determine the date's weekday and ordinal day within the year.
7. Report the epoch range covering that calendar date, from `00:00:00` through
   `23:59:59`.
8. Capture the ending time and print the elapsed duration as seconds with a
   nanosecond fractional component.

The assignment specifically calls for `clock_gettime(CLOCK_REALTIME, ...)` and
the `tv_sec` and `tv_nsec` members of `struct timespec`.
