// Challenge url:
// https://open.kattis.com/problems/grassseed

#include <stdio.h>

int main()
{
    float cost_per_metre, lines, metres = 0;
    scanf("%f\n%f\n", &cost_per_metre, &lines);

    for (int i = 0; i < lines; i++)
    {
        float x, y;
        scanf("%f %f\n", &x, &y);
        metres += x * y; 
    }
    printf("%f\n", cost_per_metre * metres);

    return 0;
}
