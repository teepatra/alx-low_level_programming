#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[])
{
    if (argc != 7)
    {
        printf("Usage: ./gm n1 n2 n3 n4 n5 bonus\n");
        return 1;
    }

    int player_Numbers[6];
    for (int i = 1; i <= 6; i++)
    {
        int num = atoi(argv[i]);
        if (num < 1 || (i < 6 && num > 75) || (i == 6 && num > 15)) {
            printf("Invalid number: %d\n", num);
            return 1;
        }
        player_Numbers[i-1] = num;
    }

    srand(time(NULL));
    int winning_Numbers[6];
    for (int i = 0; i < 5; i++)
    {
        int num;
        do
	{
            num = rand() % 75 + 1;
        } while (num == winning_Numbers[0] || num == winning_Numbers[1] || num == winning_Numbers[2] || num == winning_Numbers[3] || num == winning_Numbers[4]);
        winning_Numbers[i] = num;
    }
    winning_Numbers[5] = rand() % 15 + 1;

    printf("Winning numbers: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", winning_Numbers[i]);
    }
    printf("\n");

    int num_Matches = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (player_Numbers[i] == winning_Numbers[j]) {
                num_Matches++;
            }
        }
    }
    if (player_Numbers[5] == winning_Numbers[5]) {
        printf("Bonus number matched!\n");
        num_Matches++;
    }
    if (num_Matches == 6) {
        printf("You win!\n");
    } else {
        printf("Better luck next time.\n");
    }

    return 0;
}
