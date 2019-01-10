// Challenge url:
// https://open.kattis.com/problems/batterup

#include <stdio.h>

int main()
{
    int n;
    float hits = 0, bases = 0;
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        float current_num;
        scanf("%f", &current_num);

        if (current_num == -1)
            continue;

        hits++;
        bases += current_num;
    }
    printf("%f\n", bases/hits);

    return 0;
}
