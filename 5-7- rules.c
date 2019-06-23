#include <stdio.h>

int main (void)
{

    int top, score;

    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    //             -7 * 6 + (4 + 3 * (2 + 3));
    //             -7 * 6 + (4 + 3 * 5);
    //             -7 * 6 + (4 + 15);
    //             -7 * 6 + 19;
    //             -7 * 6 + 19;
    //             -42 + 19;
    //             -23;



    printf("top = %d, score = %d\n", top, score);

    return 0;
}
