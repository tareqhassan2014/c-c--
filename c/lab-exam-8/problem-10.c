#include <stdio.h>

void change_array(int arr[], int size, int *ans_arr)
{
    for (int i = 0; i < size; i++)
    {
        ans_arr[i] = arr[size - i - 1];
    }
}

int main()
{
    int size = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size], ans[size];
    printf("Enter elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    change_array(arr, size, ans);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}
