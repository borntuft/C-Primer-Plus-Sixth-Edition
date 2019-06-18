#include <stdio.h>

int main (void)
{

    float secondsPerYear = 3.156e7;
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %e seconds old", age * secondsPerYear);

    return 0;
}
