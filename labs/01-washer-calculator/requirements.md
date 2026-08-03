# Lab 01 requirements: washer calculator

> Paraphrased from archived course instructions. This describes the assignment,
> not a claim that the archived submission satisfies every requirement.

## Goal

Write a C program that calculates the area and weight of manufactured flat
washers.

## Required behavior

1. Name the source file `lab1.c` and define pi as `3.14159` with a preprocessor
   constant.
2. Prompt for the inner diameter, outer diameter, and thickness in centimeters,
   in that order.
3. Prompt for material density in grams per cubic centimeter and then for the
   number of washers in the batch.
4. Calculate the washer's rim area, the weight of one washer, and the total
   batch weight.
5. Print the three calculated results on separate, clearly labeled lines.

The expected geometry is the area of the outer circle minus the area of the
inner circle. Multiplying that area by thickness gives volume; multiplying
volume by density gives the weight of one washer.
