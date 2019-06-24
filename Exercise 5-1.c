#include <stdio.h>
#define MINUTES_PER_HOUR 60

int main (void)
{

    printf("Enter a time in minutes (Enter 0 to quit): ");
    int userInput;
    scanf("%d", &userInput);

    while (userInput > 0)
    {
        printf("There are %d hours and %d minutes in %d minutes\n\n", (userInput / MINUTES_PER_HOUR), (userInput % MINUTES_PER_HOUR), userInput);
        printf("Enter a time in minutes (Enter 0 to quit): ");
        scanf("%d", &userInput);
    }

    printf("Done!");


}
