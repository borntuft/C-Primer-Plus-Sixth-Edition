//Write a program that converts your age in years to days and displays both values. At this
// point, don’t worry about fractional years and leap years.

#include <stdio.h>

int main (void)
{

    int age = 39;
    int days = age * 365;

    printf("I am %d years old and %d days old.\n", age, days);

}
