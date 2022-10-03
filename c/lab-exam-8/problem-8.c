// languages: c

#include <stdio.h>

int odd_even(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (odd_even(num) == 1)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }

    return 0;
}
