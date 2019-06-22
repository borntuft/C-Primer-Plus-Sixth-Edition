#include <stdio.h>

int main (void)
{

    printf("Enter your name: ");
    char name[40];
    scanf("%s", name);

    printf("Height in inches: ");
    float inches;
    scanf("%f", &inches);

    printf("%s, you are %.3f feet tall", name, inches / 12);

    return 0;
}
