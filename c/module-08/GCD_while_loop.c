#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    printf("\nEnter 2 number to get GCD: ");
    scanf("%d %d", &a, &b);

    printf("\n");
    while (a != 0)
    {
        int reminder = b % a;

        b = a;
        a = reminder;

        printf("%d %d \n", a, b);
    }

    printf("GCD = %d\n", b);

    return 0;
}