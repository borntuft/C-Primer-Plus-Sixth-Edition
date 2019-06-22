#include <stdio.h>

int main (void)
{

    printf("Enter your first and last name: ");
    char firstname[40];
    char lastname[40];
    scanf("%s", firstname);
    scanf("%s", lastname);
    printf("%s, %s", lastname, firstname);

    return 0;
}
