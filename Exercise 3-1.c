#include <stdio.h>

int main (void)
{

    int testInt = 2147483647;
    unsigned int testInt2 = 4294967295U;

    printf("%d + 1 = %d\n", testInt, testInt + 1);
    printf("%u + 1 = %u\n", testInt2, testInt2 + 1);


    return 0;
}
