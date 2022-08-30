#include <stdio.h>

int main()
{

    int s = 0, t = 0, x = 0;

    scanf("%d %d %d", &s, &t, &x);

    int is_at_home = 0;

    while (s != t)
    {

        if (s == x)
        {
            is_at_home = 1;
        }

        s++;

        if (s == 24)
        {
            s = 0;
        }
    }

    if (is_at_home == 0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }

    return 0;
}