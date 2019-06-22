#include <stdio.h>
#include <string.h>

int main (void)
{

    printf("Enter your first and last name: ");

    char firstname[40];
    scanf("%s", firstname);

    char lastname[40];
    scanf("%s", lastname);

    int fnwidth = strlen(firstname);
    int lnwidth = strlen(lastname);

    printf("%s %s\n", firstname, lastname);
    printf("%*d %*d\n\n", fnwidth, fnwidth, lnwidth, lnwidth);

    printf("%s %s\n", firstname, lastname);
    printf("%-*d %-*d\n", fnwidth, fnwidth, lnwidth, lnwidth);

    return 0;
}
