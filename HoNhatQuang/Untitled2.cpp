#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 8 // Change N to the desired board size

int board[N][N];

// Function to check if it's safe to place a queen at a given position
int isSafe(int row, int col) {
    for (int i = 0; i < col; i++) {
        if (board[row][i]) return 0; // Check row
        if (board[i][col]) return 0; // Check column
        if (row - i >= 0 && col - i >= 0 && board[row - i][col - i]) return 0; // Check upper left diagonal
        if (row + i < N && col - i >= 0 && board[row + i][col - i]) return 0; // Check lower left diagonal
    }
    return 1;
}

// Function to solve N-Queens using Random Restart Hill Climbing
int solveNQueens() {
    srand(time(NULL));
    int restarts = 1000; // Number of random restarts

    while (restarts--) {
        // Initialize the board with all zeros (no queens)
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                board[i][j] = 0;
            }
        }

        // Place queens randomly in each column
        for (int col = 0; col < N; col++) {
            int row = rand() % N;
            board[row][col] = 1;
        }

        int attacks = 0;
        for (int col = 0; col < N; col++) {
            for (int row = 0; row < N; row++) {
                if (board[row][col]) {
                    for (int i = 0; i < N; i++) {
                        if (i != col) {
                            if (board[row][i]) attacks++;
                        }
                    }
                }
            }
        }

        while (attacks > 0) {
            // Find a queen with the maximum number of conflicts
            int maxRow = -1, maxCol = -1, maxAttacks = 0;
            for (int col = 0; col < N; col++) {
                for (int row = 0; row < N; row++) {
                    if (board[row][col]) {
                        int originalAttacks = 0;
                        for (int i = 0; i < N; i++) {
                            if (i != col) {
                                if (board[row][i]) originalAttacks++;
                            }
                        }

                        board[row][col] = 0;
                        int newAttacks = 0;
                        for (int i = 0; i < N; i++) {
                            if (i != col) {
                                if (board[row][i]) newAttacks++;
                            }
                        }

                        if (newAttacks > originalAttacks) {
                            if (newAttacks > maxAttacks) {
                                maxAttacks = newAttacks;
                                maxRow = row;
                                maxCol = col;
                            }
                        } else {
                            board[row][col] = 1;
                        }
                    }
                }
            }

            if (maxAttacks > 0) {
                // Move the queen to minimize conflicts
                board[maxRow][maxCol] = 0;
                int newRow = maxRow;
                int newCol = maxCol;
                int minAttacks = maxAttacks;

                for (int i = 0; i < N; i++) {
                    if (i != maxCol) {
                        board[maxRow][i] = 0;
                        int newAttacks = 0;
                        for (int j = 0; j < N; j++) {
                            if (j != i) {
                                if (board[maxRow][j]) newAttacks++;
                            }
                        }

                        if (newAttacks < minAttacks) {
                            minAttacks = newAttacks;
                            newCol = i;
                        }
                        board[maxRow][i] = 1;
                    }
                }

                board[maxRow][newCol] = 1;
                attacks = maxAttacks - 1;
            } else {
                break;
            }
        }

        if (attacks == 0) {
            // A solution has been found
            return 1;
        }
    }

    // No solution found after all restarts
    return 0;
}

// Function to print the board
void printBoard() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

int main() {
    if (solveNQueens()) {
        printf("Solution found:\n");
        printBoard();
    } else {
        printf("No solution found.\n");
    }
    return 0;
}
