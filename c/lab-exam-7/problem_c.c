#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char input[1000];
    int frequency[10] = {0};

    fgets(input, 1000, stdin);

    for (int i = 0; i < strlen(input) - 1; i++)
    {
        char character = input[i];
        if (character >= '0' && character <= '9')
        {
            frequency[character - '0']++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", frequency[i]);
    }

    return 0;
}