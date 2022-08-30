#include <stdio.h>

int main()
{
    int n_input = 0, n_A = 0, n_D = 0;

    scanf("%d", &n_input);

    for (int i = 0; i <= n_input; i++)
    {
        char letter;
        scanf("%c", &letter);

        if (letter == 65)
        {
            n_A++;
        }
        else if (letter == 68)
        {
            n_D++;
        }
    }

    if (n_A > n_D)
    {
        printf("Anton");
    }
    else if (n_A < n_D)
    {
        printf("Danik");
    }
    else if (n_A == n_D)
    {
        printf("Friendship");
    }

       return 0;
};