#include <stdio.h>
#define CM_PER_FEET 30.48f

int main (void)
{

    printf("Enter a height in centimetres (0 to quit): ");
    float userInput;
    scanf("%f", &userInput);

    int height;
    float inches;

    while (userInput > 0)
    {
        height = userInput / CM_PER_FEET;
        inches = userInput % CM_PER_FEET;
        printf("%1.1f cm = %d feet, %1.1f inches\n", userInput, height, inches);
        printf("Enter a height in centimetres (0 to quit): ");
        scanf("%f", &userInput);
    }

    printf("Done!");

}
