#include <stdio.h>

int main()
{

    int n_test = 0;
    scanf("%d", &n_test);
    int output[n_test];

    for (int k = 0; k < n_test; k++)
    {
        int array_length = 0;
        scanf("%d", &array_length);

        int my_array[array_length];

        for (int i = 0; i < array_length; i++)
        {
            scanf("%d", &my_array[i]);
        }

        int max_value = my_array[0];

        for (int i = 0; i < array_length; i++)
        {
            max_value = max_value > my_array[i] ? max_value : my_array[i];
        }

        int frequency[max_value + 1];

        for (int i = 0; i < max_value + 1; i++)
        {
            frequency[i] = 0;
        }

        for (int i = 0; i < array_length; i++)
        {
            frequency[my_array[i]]++;
        }

        int ans = -1;

        for (int i = 0; i < max_value + 1; i++)
        {

            if (frequency[i] > 2)
            {
                ans = i;
            }
        }
        output[k] = ans;
    }

    // print ans
    for (int i = 0; i < n_test; i++)
    {
        printf("%d \n", output[i]);
    }

    return 0;
}
