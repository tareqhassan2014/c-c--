#include <stdio.h>
#include <string.h>

int main()
{

    char input[100];
    scanf("%s", &input);

    int counter[26] = {0};

    for (int i = 0; i < strlen(input); i++)
    {
        char character = input[i];
        counter[character - 'a']++;
    }

    for (char character = 'a'; character < 'z'; character++)
    {
        if (counter[character - 'a'])
        {
            printf("Character => %c count => %d \n", character, counter[character - 'a']);
        }
    }

    return 0;
}