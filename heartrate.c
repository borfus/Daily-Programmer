// Challenge url:
// https://open.kattis.com/problems/heartrate

#include <stdio.h>

int main()
{
    int cases;
    float b, p;
    scanf("%i", &cases);

    for (int i = 0; i < cases; i++)
    {
        scanf("%f %f", &b, &p);
        printf("%.4f %.4f %.4f\n", (((60/p) * b) - (60/p)), ((60/p) * b), ((60/p) * b) + (60/p));
    }

    return 0;
}
