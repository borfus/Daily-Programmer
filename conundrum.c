// Challenge url:
// https://open.kattis.com/problems/conundrum

#include <stdio.h>
#include <string.h>

int main()
{
    int letter_change_count = 0;
    char secret[301];
    scanf("%300s", secret);

    for (int i = 0; i < strlen(secret); i++)
    {
        if (i % 3 == 0 && secret[i] != 'P')
        {
            letter_change_count++;
        }
        else if (i % 3 == 1 && secret[i] != 'E')
        {
            letter_change_count++;
        }
        else if (i % 3 == 2 && secret[i] != 'R')
        {
            letter_change_count++;
        }
    }
    printf("%i\n", letter_change_count);

    return 0;
}
