#include <stdio.h>

int main()
{

    int input_1 = 0, input_2 = 0, number_of_int = 0;

    scanf("%d %d", &input_1, &input_2);

    while (input_1 <= input_2)
    {
        input_1++;
        number_of_int++;
    };

    printf("%d ", number_of_int);

    return 0;
}