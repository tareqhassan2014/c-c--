#include <stdio.h>
#include <string.h>

int main()
{

    int str_len = 0;
    scanf("%d", &str_len);

    char input_str[str_len];
    scanf("%s", &input_str);

    for (int i = 0; i < str_len; i++)
    {
        if (input_str[i] == '8' && str_len - i >= 10)
        {
            printf("%d yes ", i);
        }
    }

    return 0;
}