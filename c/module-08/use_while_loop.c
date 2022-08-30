#include <stdio.h>

int main()
{

    int x = 0;
    printf("\n Enter a number: ");
    scanf("%d", &x);

    int sum = 0;
    int reversed = 0;

    printf("\n ");
    while (x > 0)
    {
        int digit = x % 10;
        x /= 10;
        sum += digit;
        reversed = reversed * 10 + digit;
        printf("digit= %d, x =  %d\n ", digit, x);
    }

    printf("\n Digit Sum = %d", sum);
    printf("\n Reversed = %d", reversed);

    return 0;
}