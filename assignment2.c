/*
========================================================================
Title : assignment2.c
Description : tax calculator
Author : Chukwuma gbemudu R#11842531
Date : 01/31/2023
Usage : Compile and run this program using the GNU C compiler
========================================================================
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float bill, tip_percent, total_tip, total_cost, tip_per_person, total_per_person;
    int no_of_people;

    printf("Enter the bill amount: ");
    scanf("%f", &bill);

    printf("Enter the tip percentage (10, 15, or 20): ");
    scanf("%f", &tip_percent);

    printf("Enter the number of people: ");
    scanf("%d", &no_of_people);

    // Calculate tax
    float tax = bill * 0.16;

    // Calculate total cost
    total_cost = bill + tax;

    // Calculate tip
    total_tip = total_cost * (tip_percent / 100);

    // Calculate tip per person
    tip_per_person = total_tip / no_of_people;

    // Calculate total per person
    total_per_person = total_cost / no_of_people + tip_per_person;

    // Print results
    printf("\nTax amount: $%.2f\n", tax);
    printf("Bill after tax: $%.2f\n", total_cost);
    printf("Tip per person: $%.2f\n", tip_per_person);
    printf("Total per person: $%.2f\n", total_per_person);

    return 0;
}