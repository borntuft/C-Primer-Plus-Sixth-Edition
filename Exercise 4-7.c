#include <stdio.h>
#include <float.h>

int main (void)
{

    double n = 1.0 / 1.30;
    float  m = 1.0 / 1.30;

    printf("Double 'n'\n");
    printf("%.4f\n", n);
    printf("%.12f\n", n);
    printf("%.16f\n\n", n);

    printf("Float 'm'\n");
    printf("%.4f\n", m);
    printf("%.12f\n", m);
    printf("%.16f\n\n", m);

    printf("%d\n", FLT_DIG);
    printf("%d\n", DBL_DIG);
    return 0;
}
