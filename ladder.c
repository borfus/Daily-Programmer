// Challenge url:
// https://open.kattis.com/problems/ladder

#include <stdio.h>
#include <math.h>

int main()
{
    int h, v;
    scanf("%i %i", &h, &v);
    double radians = v * (3.14159265/180.0);
    printf("%i\n", (int)ceil(h/sin(radians)));
    return 0;
}
