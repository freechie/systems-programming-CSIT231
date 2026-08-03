# Lab 03 requirements: number reversal

> Paraphrased from archived course instructions. This describes the assignment,
> not a claim that the archived submission satisfies every requirement.

## Goal

Process a decimal integer supplied as a command-line argument and report several
digit-based calculations.

## Required behavior

1. Name the source file `lab3.c` and read the number from the command line rather
   than with `scanf`.
2. Reject an input below `10` with a polite message. The prompt's opening used
   “greater than 10,” but its checklist explicitly treated `10` as valid.
3. Reverse the decimal digits of the original number.
4. Calculate the sum of all digits in the original number.
5. Add the reversed number to the original number and print the result.
6. Handle trailing zeros correctly; for example, reversing `1000000` produces
   `1`, and their sum is `1000001`.
7. Determine the maximum supported input length without a runtime failure and
   report the finding with the submission.
8. Repeat the limit experiment with a `long` integer and explain whether it
   changes the result.

## Suggested checks from the assignment

- `10` should reverse to `1` and produce a combined sum of `11`.
- `9` should be rejected.
- The reversed value, digit sum, and original-plus-reversed sum should each be
  independently verified.
