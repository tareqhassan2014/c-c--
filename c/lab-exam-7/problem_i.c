#include <stdio.h>
#include <string.h>

int main()
{

    int n_char = 0, number_n = 0, number_z = 0;
    scanf("%d", &n_char);

    char input_string[n_char];

    scanf("%s", input_string);

    for (int i = 0; i < strlen(input_string); i++)
    {
        if (input_string[i] == 'z')
        {
            number_z++;
        }
        if (input_string[i] == 'n')
        {
            number_n++;
        }
    }

    for (int i = 0; i < number_n; i++)
    {
        printf("1 ");
    }
    for (int i = 0; i < number_z; i++)
    {
        printf("0 ");
    }

    return 0;
}