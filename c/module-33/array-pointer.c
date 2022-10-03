#include <stdio.h>

int main()
{

    int a[5] = {
        1,
        2,
        3,
        4,
        5};

    printf("%d  %d  %d\n", *(a + 0), *(a + 1), *(a + 2));
    printf("%d  %d  %d\n", a[0], a[1], a[2]);

    return 0;
}