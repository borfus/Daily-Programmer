// Challenge url:
// https://open.kattis.com/problems/pet

#include <stdio.h>

int main()
{
    int contestant_id, contestants[5] = {0}, a, b, c, d, highest = 0;

    for (int i = 0; fscanf(stdin, "%i %i %i %i\n", &a, &b, &c, &d) != EOF; i++)
    {
        contestants[i] = a + b + c + d;
        if (highest < contestants[i])
        {
            highest = contestants[i];
            contestant_id = i+1;
        }
    } 
    printf("%i %i\n", contestant_id, highest);

    return 0;
}
