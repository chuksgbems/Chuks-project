/*
========================================================================
Title : assignment.c
Description : poulation growth calculator
Author : Chukwuma gbemudu R#11842531
Date : 01/31/2023
Usage : Compile and run this program using the GNU C compiler
========================================================================
*/
#include <stdio.h>
//initializing funtion population
float population(int year){
    //returning the population
    return 52.966+2.184*(year-1990);
}
int main()
{
    //initializing year
    int year;
    //asking for year
    printf("Enter a year after 1990> ");
    //accepting year
    scanf("%d",&year);
    //printing year
    printf("Predicted Gotham City population for %d (in thousands):\n",year);
    //calling population funtion and printing population
    printf("%.3f",population(year));
    return 0;
}