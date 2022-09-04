#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], sum[101];

    scanf("%s %s", &a, &b);

    strrev(a);
    strrev(b);

    int length_a = strlen(a);
    int length_b = strlen(b);

    int i = 0, j = 0, k = 0, reminder = 0;

    // loop while two string's are available.
    while (i < length_a && j < length_b)
    {
        int ruf = (a[i] - '0') + (b[j] - '0') + reminder;
        sum[k] = (ruf % 10 + '0');
        reminder = ruf / 10;

        i++;
        j++;
        k++;
    }

    // loop while a available.
    while (i < length_a)
    {
        int ruf = (a[i] - '0') + reminder;
        sum[k] = (ruf % 10 + '0');
        reminder = ruf / 10;

        i++;
        k++;
    }

    // loop while b available.
    while (j < length_b)
    {
        int ruf = (b[j] - '0') + reminder;
        sum[k] = (ruf % 10 + '0');
        reminder = ruf / 10;

        j++;
        k++;
    }

    if (reminder)
    {
        sum[k] = (reminder + '0');
    }

    strrev(sum);
    printf("%s ", sum);

    return 0;
}