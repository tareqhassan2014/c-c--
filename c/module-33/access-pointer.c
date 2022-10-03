#include <stdio.h>

int main()
{

    int a = 100;
    int *p = &a;
    int **q = &p;

    *p = -5000;

    printf("%d", *p);

    return 0;
}
