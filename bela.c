// Challenge url:
// https://open.kattis.com/problems/bela

#include <stdio.h>

int main()
{
    int hands, sum = 0;
    char num, suit, trump;

    scanf("%i %c\n", &hands, &trump);

    for (int i = 0; i < hands*4; i++)
    {
        scanf("%c%c\n", &num, &suit);

        if (suit == trump)
        {
            switch (num)
            {
                case 'A':
                {
                    sum += 11;
                } break;
                case 'K':
                {
                    sum += 4;
                } break;
                case 'Q':
                {
                    sum += 3;
                } break;
                case 'J':
                {
                    sum += 20;
                } break;
                case 'T':
                {
                    sum += 10;
                } break;
                case '9':
                {
                    sum += 14;
                } break;
            }
        }
        else
        {
            switch (num)
            {
                case 'A':
                {
                    sum += 11;
                } break;
                case 'K':
                {
                    sum += 4;
                } break;
                case 'Q':
                {
                    sum += 3;
                } break;
                case 'J':
                {
                    sum += 2;
                } break;
                case 'T':
                {
                    sum += 10;
                } break;
            }
        }
    }
    printf("%i\n", sum);

    return 0;
}
