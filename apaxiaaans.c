// Challenge url:
// https://open.kattis.com/problems/apaxiaaans

#include <stdio.h>
#include <string.h>

int main()
{
    char name[256];
    scanf("%255s", &name);

    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] != name[i+1])
        {
            printf("%c", name[i]);
        }
    }
    printf("\n");

    return 0;
}
