#include <stdio.h>

int main (void)
{

    int count = 0, sum = 0;

    printf("How many days would you like to collect money for: ");
    int userInput;
    scanf("%d", &userInput);

    while (count++ < userInput){
        sum = sum + count;
        printf("On Day %d, you will receive $%d\n", count, sum);
    }

    return 0;
}
