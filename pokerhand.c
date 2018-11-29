// Challenge url:
// https://open.kattis.com/problems/pokerhand

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int card_count = 1;
    char number_of_cards = 5, *cards[5], current_card[3];
    for (int i = 0; fscanf(stdin, "%s", current_card) != EOF; i++)
    {
        cards[i] = malloc(3);
        strcpy(cards[i], current_card);
    }

    for (int i = 0; i < number_of_cards; i++)
    {
        int current_count = 1;
        for (int j = 0; j < number_of_cards; j++)
        {
            if (j == i)
                continue;

            if (cards[i][0] == cards[j][0])
                current_count++;
        }

        if (current_count > card_count)
            card_count = current_count;
    }
    printf("%i\n", card_count);

    for (int i = 0; i < number_of_cards; i++)
        free(cards[i]);

    return 0;
}
