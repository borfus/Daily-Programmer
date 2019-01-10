// Challenge url:
// https://open.kattis.com/problems/alphabetspam

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    float length, whitespace = 0, lowercase = 0, uppercase = 0, symbols = 0;
    char line[100001];
    scanf("%100000s", &line);
    length = strlen(line);

    for (int i = 0; i < length; i++)
    {
        if (line[i] == '_')
        {
            whitespace++;
        }
        else if (islower(line[i]))
        {
            lowercase++;
        }
        else if (isupper(line[i]))
        {
            uppercase++;
        }
        else if (!isalpha(line[i]))
        {
            symbols++;
        }
    }
    printf("%f\n%f\n%f\n%f\n", whitespace/length, lowercase/length, uppercase/length, symbols/length);

    return 0;
}
