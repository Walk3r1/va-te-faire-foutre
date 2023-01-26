/*
#include <stdio.h>

int main(void) {
    int i = 2, num1, num2, nok = 1;

    printf("enter num1: ");
    scanf("%d", &num1);
    printf("enter num2: ");
    scanf("%d", &num2);
    
    while (num1 > 1 || num2 > 1)
    {
        while (num1 % i == 0 && num2 % i == 0)
        {
            i++;
        }

        nok *= i;

        if (num1 % i == 0)
        {
            num1 = num1 / i;
        }
        if (num2 % i == 0)
        {
            num2 = num2 / i;
        }

    }
    printf("nok: %d", nok);
}
*/

#include <stdio.h>

int main(void) {
    int num1, num2, nok = 0;
  
    printf("enter num1: ");
    scanf("%d", &num1);
    printf("enter num2: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        nok = num1;
    }//max na tiq
    else
    {
        nok = num2;
    }//max

    while(1)                    
    {
        if(nok % num1 == 0 && nok % num2 == 0)
        {
            printf("nok: %d", nok);
            break;//12, 18, ne, da , 19, ne, ne, 20, ne, ne, 21,       
        }//ne,  da, NE, 5,  ne,  ne,  da, da, nok
       
        nok++;
    }
    
}