#include <stdio.h>

int main()
{
    int number = 0;

    scanf("%d", &number);

    if (number == 1)
    {
        printf("I hate it");
        return 0;
    }

    for (int i = 1; i < number; i++)
    {

        if (i % 2 == 0)
        {
            printf("I love that ");
        }
        else if (i % 2 != 0 && i < number)
        {
            printf("I hate that ");
        }
    }

    if (number % 2 == 0)
    {
        printf("I love it");
    }
    else
    {
        printf("I hate it");
    }

    return 0;
}