#include <stdio.h>

float make_average(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (float)sum / size;
}

int main()
{

    int arr[100] = {0}, size = 0;
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Call the function make_average() and print the result
    printf("%f", make_average(arr, size));

    return 0;
}