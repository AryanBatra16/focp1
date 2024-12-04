#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user_choice, computer_choice, user_score = 0, computer_score = 0, rounds;

    srand(time(0));

    printf("Rock Paper Scissors Game\n");
    printf("Enter number of rounds: ");
    scanf("%d", &rounds);

    for (int i = 1; i <= rounds; i++) {
        printf("\n--- Round %d ---\n", i);
        printf("Choose an option:\n1. Rock\n2. Paper\n3. Scissors\nEnter your choice: ");
        scanf("%d", &user_choice);

        computer_choice = rand() % 100;
        if (computer_choice < 33) {
            printf("Computer chose: Rock\n");
            computer_choice = 1;
        } else if (computer_choice < 66) {
            printf("Computer chose: Paper\n");
            computer_choice = 2;
        } else {
            printf("Computer chose: Scissors\n");
            computer_choice = 3;
        }

        if (user_choice == computer_choice) {
            printf("It's a tie!\n");
        } else if ((user_choice == 1 && computer_choice == 3) ||
                   (user_choice == 2 && computer_choice == 1) ||
                   (user_choice == 3 && computer_choice == 2)) {
            printf("You win this round!\n");
            user_score++;
        } else {
            printf("Computer wins this round!\n");
            computer_score++;
        }

        printf("Score -> You: %d, Computer: %d\n", user_score, computer_score);
    }

    printf("\n--- Final Score ---\nYou: %d, Computer: %d\n", user_score, computer_score);
    if (user_score > computer_score) {
        printf("Congratulations, you won the game!\n");
    } else if (user_score < computer_score) {
        printf("Computer wins the game. Better luck next time!\n");
    } else {
        printf("The game is a tie!\n");
    }

    return 0;
}
