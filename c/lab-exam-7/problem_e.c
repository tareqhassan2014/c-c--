#include <stdio.h>

int main()
{

    int input = 0, sum = 0;
    scanf("%d", &input);

    for (int i = 0; i < 5; i++)
    {
        int digit = input % 10;
        sum += digit;
        input /= 10;
    }

    printf("%d", sum);

    return 0;
}