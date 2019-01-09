// Challenge url:
// https://open.kattis.com/problems/cetvrta

#include <stdio.h>

int main()
{
    int points[3][2], x, y;
    for (int i = 0; i < 3; i++)
    {
        scanf("%i %i", &points[i][0], &points[i][1]);
    }

    if (points[0][0] == points[1][0])
    {
        x = points[2][0];
    }
    else if (points[0][0] == points[2][0])
    {
        x = points[1][0];
    }
    else if (points[1][0] == points[2][0])
    {
        x = points[0][0];
    }

    if (points[0][1] == points[1][1])
    {
        y = points[2][1];
    }
    else if (points[0][1] == points[2][1])
    {
        y = points[1][1];
    }
    else if (points[1][1] == points[2][1])
    {
        y = points[0][1];
    }

    printf("%i %i\n", x, y);

    return 0;
}
