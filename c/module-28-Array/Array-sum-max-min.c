#include <stdio.h>

int main()
{

    int size = 0;
    scanf("%d", &size);

    int my_array[size];

    /*

        calculate size of a array = sizeof(my_array) / sizeof(my_array[0]);



        implicitly set value on a variable length array but it works only for 0
        memset(my_array, 0, sizeof(my_array));


        for (int i = 0; i < size; i++)
        {
            printf("%d ", my_array[i]);
        }

        set every variable 0 value

        for (int i = 0; i < size; i++)
        {
             my_array[i] = 0;
        }

    */

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &my_array[i]);
    }

    int sum = 0, max = my_array[0], min = my_array[0];

    for (int i = 0; i < size; i++)
    {

        sum += my_array[i];

        if (my_array[i] > max)
        {
            max = my_array[i];
        }

        if (my_array[i] < min)
        {
            min = my_array[i];
        }

        printf("Index = [%d], sum = %d, max = %d, min = %d \n", i, sum, max, min);
    }

    return 0;
}
