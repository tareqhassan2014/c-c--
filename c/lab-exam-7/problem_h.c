#include <stdio.h>
#include <string.h>

int main()
{

    char input[101];
    scanf("%s", input);
    int count = 1;
    for (int i = 0; i < strlen(input) - 1; i++)
    {

        if (input[i] == input[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if (count >= 7)
        {
            printf("YES");
            return 0;
        }
    }

    printf("NO");

    return 0;
}