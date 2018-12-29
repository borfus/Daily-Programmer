// Challenge url:
// https://open.kattis.com/problems/bijele

#include <stdio.h>

int main()
{
    int king, queen, rooks, bishops, knights, pawns;
    scanf("%i %i %i %i %i %i", &king, &queen, &rooks, &bishops, &knights, &pawns);
    printf("%i %i %i %i %i %i\n", 1-king, 1-queen, 2-rooks, 2-bishops, 2-knights, 8-pawns);
    return 0;
}
