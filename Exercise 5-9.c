#include <stdio.h>

void Temperaures (double);

int main (void)
{
    printf("Enter a temperature in Fahrenheit: ");
    double userInput;
    int scanfReturn;

    scanfReturn = scanf("%lf", &userInput);

    while (scanfReturn == 1)
    {
        Temperaures(userInput);

        printf("Enter a temperature in Fahrenheit: ");
        scanfReturn = scanf("%lf", &userInput);
    }

    printf("Done");

    return 0;
}

void Temperaures (double userInput)
{
    const double tempF = userInput;
    const double tempC = 5.0 / 9.0 * (tempF - 32.0);
    const double tempK = tempC + 273.16;

    printf("Fahrenheit = %.2lf\n", tempF);
    printf("Celcius = %.2lf\n", tempC);
    printf("Kelvin = %.2lf\n\n", tempK);

}
