#include <stdio.h>

void cuber (double);

int main (void)
{

    printf("Enter a value and I will cube its value: ");
    double userInput;
    scanf("%lf", &userInput);
    cuber(userInput);

    return 0;
}

void cuber (double userInput)
{
    printf("%1.2lf cubed is %1.2lf", userInput, userInput * userInput * userInput);
}
