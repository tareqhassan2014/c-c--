#include <stdio.h>
#include <string.h>

int check_palindrome(char str[])
{
    int i, j, count = 0;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int changes = check_palindrome(str);
    printf("Number of changes: %d", changes);

    return 0;
}
