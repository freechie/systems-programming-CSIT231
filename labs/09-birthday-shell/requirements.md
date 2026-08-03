# Lab 09 requirements: birthday and epoch time in Bash

> Paraphrased from archived course instructions. This describes the assignment,
> not a claim that the archived submission satisfies every requirement.

## Goal

Reimplement Lab 06 as an individual Bash assignment while preserving its input
and output behavior.

## Required behavior

1. Capture the starting time with nanosecond precision and print a one-line
   explanation of Unix epoch time.
2. Ask whether the user knows their birthday in epoch form. Use a Bash `case`
   statement to accept only `Y`, `y`, `Yes`, `yes`, `N`, `n`, `No`, and `no`;
   repeat the question for any other response.
3. For an affirmative response, read an epoch value and convert it to a stored
   `mm/dd/yyyy` date.
4. For a negative response, read the complete birthday with one prompt in
   `mm/dd/yyyy` form and convert it to epoch time.
5. Determine the date's weekday and ordinal day within the year.
6. Print the epoch values corresponding to the beginning and end of that date.
7. Capture the ending time and print the elapsed duration with fractional-second
   precision.

Integer arithmetic is sufficient when seconds and nanoseconds are handled
separately; a decimal calculator such as `bc` may also be used.
