#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "HANGMAN";
    char guessed[] = "_______";
    int attempts = 3, correct_guesses = 0;
    char guess;

    printf("Welcome to Hangman!\n");

    while (attempts > 0 && correct_guesses < strlen(word)) {
        printf("Word: %s\n", guessed);
        printf("Attempts left: %d\n", attempts);
        printf("Enter a letter: ");
        scanf(" %c", &guess);

        int found = 0;
        for (int i = 0; i < strlen(word); i++) {
            if (word[i] == guess && guessed[i] == '_') {
                guessed[i] = guess;
                correct_guesses++;
                found = 1;
            }
        }

        if (!found) attempts--;
    }

    if (correct_guesses == strlen(word))
        printf("You saved the man! The word is: %s\n", word);
    else
        printf("The man is hanged. The word was: %s\n", word);

    return 0;
}
