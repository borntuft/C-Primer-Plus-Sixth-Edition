#include <stdio.h>

void pound (int n);

int main (void)
{

    int times = 5;
    char ch = '!'; // ASCII code is 33
    float f = 6.0f;

    pound(times);   // int argument
    pound(ch);      // same as pound((int)ch)
    pound(f);       // same as pound((int)f)

    return 0;
}

void pound (int n)  // ANSI style function header
{
    while (n-- > 0)
        printf("#");
    printf("\n");
}
