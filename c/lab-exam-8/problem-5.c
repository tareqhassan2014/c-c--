#include <stdio.h>

int check_array(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i + 1)
        {
            count++;
        }
    }
    if (count == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (check_array(arr, n))
    {
        printf("The array has all values from 1 to %d", n);
    }
    else
    {
        printf("The array does not have all values from 1 to %d", n);
    }

    return 0;
}
