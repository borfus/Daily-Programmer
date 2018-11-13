// Challenge url:
// https://www.reddit.com/r/dailyprogrammer/comments/6ze9z0/20170911_challenge_331_easy_the_adding_calculator/

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b;
    char symbol;

    for (;;)
    {
        scanf("%lf %c %lf", &a, &symbol, &b);
    
        switch(symbol)
        {
            case '+':
            {
                printf("%lf\n", a + b);
            } break;
            case '-':
            {
                printf("%lf\n", a - b);
            } break;
            case '*':
            {
                printf("%lf\n", a * b);
            } break;
            case '/':
            {
                if (!b)
                {
                    puts("Can't divide by 0.");
                    break;
                }
                printf("%lf\n", a / b);
            } break;
            case '^':
            {
                if (!b)
                {
                    puts("1");
                    break;
                }
                printf("%lf\n", pow(a, b));
            } break;
            default:
            {
                puts("Not a valid symbol.");
            } break;
        }
    }
    return 0;
}
