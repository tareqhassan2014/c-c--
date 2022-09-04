#include <stdio.h>
#include <string.h>

int main()
{
    int n_input = 0;
    scanf("%d", &n_input);

    for (int i = 0; i < n_input; i++)
    {
        int str_len = 0, ans = 0;
        scanf("%d", &str_len);

        char input_str[str_len];
        scanf("%s", input_str);

        for (int i = 0; i < strlen(input_str); i++)
        {
            if (input_str[i] == '8' && strlen(input_str) - i > 10)
            {
                ans = 1;
            }
        }

        if (ans)
        {
            printf("YES \n");
        }
        else
        {
            printf("NO \n");
        }
    }

    return 0;
}
