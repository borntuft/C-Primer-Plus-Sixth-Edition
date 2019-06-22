#include <stdio.h>

int main (void)
{

    printf("Enter a float: ");

    float userinput;
    scanf("%f", &userinput);

    printf("%1.1f or %1.1e\n", userinput, userinput);
    printf("%1.3f or %1.3e\n", userinput, userinput);
    return 0;
}
