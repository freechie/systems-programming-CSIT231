# Lab 02 requirements: unit converter

> Paraphrased from archived course instructions. This describes the assignment,
> not a claim that the archived submission satisfies every requirement.

## Goal

Read one numeric value and produce temperature and distance conversions without
asking which unit the input originally represents.

## Required behavior

1. Name the source file `lab2.c` and prompt once for a number.
2. Treat that value as Fahrenheit and display its Celsius and Kelvin
   equivalents.
3. Treat the same value as Celsius and display its Fahrenheit and Kelvin
   equivalents.
4. Treat it as Kelvin and display its Fahrenheit and Celsius equivalents.
5. Repeat the pattern for feet, miles, and meters, producing three additional
   lines in which each assumed unit is converted to the other two.
6. Display numeric results with two digits after the decimal point and align the
   output consistently.

Use the standard Fahrenheit, Celsius, and Kelvin conversion formulas. If an
assumed temperature would produce a Kelvin value below zero, print an
absolute-zero error instead of that conversion. Convert negative distance input
to its positive magnitude before performing distance calculations.

## Suggested checks from the assignment

- Test `0`, `-273.15`, `-40`, `32`, and `212`.
- Confirm that the program compiles and that results agree with an independent
  conversion reference.
- Use meaningful variable names, readable nesting, and comments explaining the
  calculation variables.
