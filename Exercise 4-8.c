#include <stdio.h>

int main (void)
{

    float miles, gallons;

    const float GALLONSTOLITRES = 3.785;
    const float MILESTOKM = 1.609;

    printf("Enter the number of miles travelled: ");
    scanf("%f", &miles);

    printf("Enter the number of gallons consumed: ");
    scanf("%f", &gallons);

    printf("Miles Per Gallon: %.1f\n", miles / gallons);
    printf("Litres Per 100km: %.1f\n", (miles * MILESTOKM) / (gallons * GALLONSTOLITRES));

    return 0;
}
