// Challenge url:
// https://open.kattis.com/problems/hissingmicrophone

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word[32];
    scanf("%31s", &word);

    for (int i = 1; i < strlen(word); i++)
    {
        if (word[i-1] == 's' && word[i] == 's')
        {
            printf("hiss\n");
            exit(0);
        }
    }
    printf("no hiss\n");

    return 0;
}
