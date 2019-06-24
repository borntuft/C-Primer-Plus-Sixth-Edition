#include <stdio.h>
#define DAYS_PER_WEEK 7

int main (void)
{

    printf("Enter number of days (0 to quit): ");
    int userInput;
    scanf("%d", &userInput);

    while (userInput > 0)
    {
        printf("%d days are %d weeks, %d days.\n", userInput, (userInput / DAYS_PER_WEEK), (userInput % DAYS_PER_WEEK));
        printf("Enter number of days (0 to quit): ");
        scanf("%d", &userInput);
    }

    printf("Done!");

}
