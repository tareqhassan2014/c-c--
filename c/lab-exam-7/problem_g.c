#include <stdio.h>
#include <string.h>

int main()
{

    char input[1000], template[] = "heidi";
    scanf("%s", &input);

    int x = 0;

    for (int i = 0; i < strlen(input); i++)
    {
        if (template[x] == input[i])
        {
            x++;
        }
    }

    if (x > 4)
    {
        printf("YES ");
    }
    else
    {
        printf("NO ");
    }

    return 0;
}