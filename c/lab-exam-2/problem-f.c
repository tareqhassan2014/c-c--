#include <stdio.h>

int main()
{

    int row = 0, col = 0, k = 1;

    scanf("%d %d", &row, &col);

    for (size_t i = 1; i <= row; i++)
    {

        if (i % 2 == 0)
        {
            k++;
        }

        for (size_t j = 1; j <= col; j++)
        {

            if (i % 2 == 0)
            {

                if (k % 2 == 0)
                {
                    if (j <= col - 1)
                    {
                        printf(".");
                    }
                    else
                    {
                        printf("#");
                    }
                }
                else
                {
                    if (j == 1)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf(".");
                    }
                }
            }
            else
            {
                printf("#");
            }
        }

        printf("\n");
    };

    return 0;
}
