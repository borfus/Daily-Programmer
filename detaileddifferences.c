// Challenge url:
// https://open.kattis.com/problems/detaileddifferences

#include <stdio.h>
#include <string.h>

int main()
{
    int tests;
    char line1[2048], line2[2048];

    scanf("%i", &tests);
    for (int i = 0; i < tests; i++)
    {
        scanf("%2047s\n%2047s\n", &line1, &line2);
        printf("%s\n%s\n", line1, line2);

        for (int j = 0; j < strlen(line1); j++)
        {
            if (line1[j] == line2[j])
            {
                printf(".");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n\n");
    }

    return 0;
}
