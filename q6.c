#include <stdio.h>

char board[3][3];

void print_board() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

int check_win() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) 
            return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) 
            return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) 
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) 
        return 1;
    return 0;
}

int main() {
    int row, col, player = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }

    while (1) {
        print_board();
        printf("Player %d's turn. Enter row and column: ", player); // (0-2) means valid rows and columns are 0, 1, or 2
        scanf("%d %d", &row, &col);

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }

        board[row][col] = (player == 1) ? 'X' : 'O';

        if (check_win()) {
            print_board();
            printf("Player %d wins!\n", player);
            break;
        }

        player = (player == 1) ? 2 : 1;
    }

    return 0;
}
