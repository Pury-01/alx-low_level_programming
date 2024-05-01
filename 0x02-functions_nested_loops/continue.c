#include <stdio.h>

void main(void)

{
    int a = 0, i = 0, sum = 0;

    for (i = 0; i <= 5; i++)
    {
        printf("Enter an integer ");
        scanf("%d", &a);
        if (a < 0)
        continue;

        sum = sum + a;
    }
    printf("Sum = %d\n",sum);
}