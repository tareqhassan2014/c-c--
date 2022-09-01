#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    long long fibonacci[n];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d -> %lld \n", i + 1, fibonacci[i]);
    }

    int fib[5];

    fib[0] = fib[1] = 1;

    for (int i = 2; i < 5; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("%d", fib[4]);

    return 0;
}