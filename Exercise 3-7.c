#include <stdio.h>

int main (void)
{

    float rate = 2.54;
    int height;

    printf("Enter your height in inches: ");
    scanf("%d", &height);
    printf("You are %.2f centimetres tall", height * rate);

    return 0;
}
