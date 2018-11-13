// Challenge url:
// https://www.reddit.com/r/dailyprogrammer/comments/13hmz3/11202012_challenge_113_easy_stringtype_checking/

#include <stdio.h>
#include <regex.h>

int main()
{
    regex_t regex;
    char buffer[256];
    scanf("%s", buffer);
    
    if (!regcomp(&regex, "^-?[0-9]+$", REG_EXTENDED) &&
        !regexec(&regex, buffer, 0, NULL, 0))
    {
        puts("int");
    }
    else if (!regcomp(&regex, "^-?[0-9]+.[0-9]+$", REG_EXTENDED) &&
             !regexec(&regex, buffer, 0, NULL, 0))
    {
        puts("float");
    }
    else if (!regcomp(&regex, "^[0-9]{1,2},[0-9]{1,2},[0-9]{2,4}$", REG_EXTENDED) &&
             !regexec(&regex, buffer, 0, NULL, 0))
    {
        puts("date");
    }
    else if (!regcomp(&regex, "[[:alnum:]]", REG_EXTENDED) &&
             !regexec(&regex, buffer, 0, NULL, 0))
    {
        puts("text");
    }

    regfree(&regex);
    return 0;
}
