#include <stdio.h>

int main (void)
{

    printf("Enter the download speed (Mbs): ");
    float speed;
    scanf("%f", &speed);

    printf("Enter the filesize (MB): ");
    float size;
    scanf("%f", &size);

    float time = (speed / 8) / size;

    printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n", speed, size, time);

    return 0;
}
