#include <stdio.h>

int main()
{

    int array_length = 0, array_sum = 0;
    scanf("%d", &array_length);
    int my_array[array_length];

    for (int i = 0; i < array_length; i++)
    {
        scanf("%d", &my_array[i]);
    }

    for (int i = 0; i < array_length; i++)
    {
        array_sum += my_array[i];
    }

    printf("%d", array_sum);

    return 0;
}