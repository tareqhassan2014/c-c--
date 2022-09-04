#include <stdio.h>

int main()
{

    int array_length = 0;
    scanf("%d", &array_length);
    int my_array[array_length], reverse_array[array_length];

    for (int i = 0; i < array_length; i++)
    {
        scanf("%d", &my_array[i]);
    }

    for (int i = array_length - 1, j = 0; i >= 0, j < array_length; i--, j++)
    {
        reverse_array[j] = my_array[i];
    }

    for (int i = 0; i < array_length; i++)
    {
        printf("%d ", reverse_array[i]);
    }

    return 0;
}