#include <stdio.h>

int main (void)
{

    printf("The program computes moduli.\n");

    printf("Enter an integer to serve as the second operand: ");
    int secondOperand;
    scanf("%d", &secondOperand);

    printf("Now enter the first operand: ");
    int firstOperand;
    scanf("%d", &firstOperand);

    while (firstOperand > 0)
    {
        printf("%d %% %d is %d\n", firstOperand, secondOperand, firstOperand % secondOperand);

        printf("Enter the next number for first operand (<= 0 to quit): ");
        scanf("%d", &firstOperand);
    }

    printf("Done");

    return 0;
}

