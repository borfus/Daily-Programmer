// Challenge url:
// https://open.kattis.com/problems/nastyhacks

#include <stdio.h>

int main()
{
    int loop_amount, non_ad_profit, ad_profit, ad_cost;
    scanf("%i", &loop_amount);

    for (int i = 0; i < loop_amount; i++)
    {
        scanf("%i %i %i", &non_ad_profit, &ad_profit, &ad_cost);

        if (non_ad_profit < ad_profit - ad_cost)
            printf("advertise\n");
        else if (non_ad_profit == ad_profit - ad_cost)
            printf("does not matter\n");
        else
            printf("do not advertise\n");
    }

    return 0;
}
