#include <stdio.h>

int main (void)
{

    int count, sum; // declaration

    count = 0; // assignment
    sum = 0; // assignment

    while (count++ < 20)
        sum = sum + count;

    printf("sum = %d\n", sum);

    return 0;
}
