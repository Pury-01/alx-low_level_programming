#include <stdio.h>

void main(void)
{
    int a=0, sum=0, i = 0;

   // for (i = 0; i <= 5; i++)
   while (1)
    {
        printf("Enter a number ");
        scanf("%d", &a);
        if (a < 0)
        break;
        sum = sum + a;
        printf("%d\n", sum);
    }
    printf("sum is: %d\n", sum);
}