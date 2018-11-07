// Challenge url: 
// https://www.reddit.com/r/dailyprogrammer/comments/3d4fwj/20150713_challenge_223_easy_garland_words/

#include <stdio.h>
#include <string.h>

int main()
{
    char target_word[32];
    scanf("%31s", &target_word);
    int total = 0;

    for (int i = 0; i < strlen(target_word)-1; i++)
    {
        if (strncmp(target_word, target_word + strlen(target_word)-(i+1), i+1) == 0)
            total = i+1;
    }

    printf("%d\n", total);
    return 0;
}
