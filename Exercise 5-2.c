#include <stdio.h>
#define MAXIMUM 10

int main (void)
{

    printf("Enter an integer: ");
    int userInput;
    scanf("%d", &userInput);
    int count = userInput + MAXIMUM + 1;


    while (userInput < count)
        printf("%d\n", userInput++);

    printf("Done!");


}
