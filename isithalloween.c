// Challenge url:
// https://open.kattis.com/problems/isithalloween

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char month[4];
    int day;

    scanf("%3s %i", &month, &day);

    for (int i = 0; i < strlen(month); i++)
        month[i] = tolower(month[i]);
    
    if ((strcmp(month, "oct") == 0 && day == 31) || (strcmp(month, "dec") == 0 && day == 25))
        printf("yup\n");
    else
        printf("nope\n");

    return 0;
}
