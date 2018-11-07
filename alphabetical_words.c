// Challenge url: 
// https://www.reddit.com/r/dailyprogrammer/comments/101m7y/9172012_challenge_99_easy_words_with_letters_in/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_in_alphabetical_order(char *word)
{
    for (int i = 1; i < strlen(word); i++)
    {
        if (word[i-1] <= word[i])
            continue;
        else
            return false; 
    }
    return true;
}

int main()
{
    char target[32];
    scanf("%31s", &target);

    if (is_in_alphabetical_order(target))
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}
