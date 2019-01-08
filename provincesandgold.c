// Challenge url:
// https://open.kattis.com/problems/provincesandgold

#include <stdio.h>

int main()
{
    int money = 0, gold, silver, copper;
    scanf("%i %i %i", &gold, &silver, &copper);
    money += (gold * 3) + (silver * 2) + (copper * 1);

    if (money >= 8)
    {
        printf("Province or Gold\n");
    }
    else if (money >= 6)
    {
        printf("Duchy or Gold\n");
    }
    else if (money >= 5)
    {
        printf("Duchy or Silver\n");
    }
    else if (money >= 3)
    {
        printf("Estate or Silver\n");
    }
    else if (money >= 2)
    {
        printf("Estate or Copper\n");
    }
    else
    {
        printf("Copper\n");
    }

    return 0;
}
