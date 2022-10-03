#include <stdio.h>

int count_swaps(int arr[], int size)
{
    int i, j, temp, count = 0;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int swaps = count_swaps(arr, size);
    printf("Number of swaps: %d ", swaps);

    return 0;
}