#include <stdio.h>

int main()
{

    int a = 0, b = 0, c = 0, x = 0, y = 0, z = 0, input = 0;
    // printf("Enter a 3 digit number: ");

    scanf("%d", &input);

    for (int i = 1; i <= 3; i++)
    {
        int digit = input % 10;
        input /= 10;

        if (i == 1)
        {
            a = digit;
        }
        if (i == 2)
        {
            b = digit;
        }
        if (i == 3)
        {
            c = digit;
        }
    }

    //  printf("%d %d %d", a, b, c);

    x = a * 10 + b;
    x = x * 10 + c;

    y = b * 10 + c;
    y = y * 10 + a;

    z = c * 10 + a;
    z = z * 10 + b;

    int total = x + y + z;

    printf("%d", total);

    return 0;
}