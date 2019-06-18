#include <stdio.h>

int main (void)
{

    double molecule = 3.0e-23;
    int quart;

    printf("Enter an amount of water (in quarts): ");
    scanf("%d", &quart);
    printf("There are %e molecules in %d quarts of water.\n", quart / molecule, quart);

    return 0;
}
