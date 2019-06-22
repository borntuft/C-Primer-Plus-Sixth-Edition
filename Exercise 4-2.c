#include <stdio.h>

int main (void)
{

    printf("Enter your name: ");

    char firstname[40];
    int width = 3;
    scanf("%s", &firstname);

    printf("\"%s\"\n", firstname);
    printf("\"%20s\"\n", firstname);
    printf("\"%s%*s\"\n", firstname, width, "");

    return 0;
}
