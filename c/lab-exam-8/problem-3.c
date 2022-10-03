#include <stdio.h>

int count_zero(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '0')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100];
    printf("Enter a binary string: ");
    scanf("%s", str);
    printf("Number of 0's in the string: %d ", count_zero(str));

    return 0;
}