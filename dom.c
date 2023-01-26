#include <stdio.h>

int main(void) {
    int num1, num2, bigger;

    printf("enter num1: ");
    scanf("%d", &num1);
    printf("enter num2: ");
    scanf("%d", &num2);

    bigger = num1 > num2 ? num1 : num2;

    while (1)
    {
        if (bigger % num1 == 0 && bigger % num2 == 0)
        {
            printf("nok: %d", bigger);
            break;
        }

        bigger++;
    }
}