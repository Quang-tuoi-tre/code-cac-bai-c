#include <iostream>
#include <vector>

// Kích thu?c bàn c?
#define N 8

// Ki?m tra xem ô (x, y) có n?m trên bàn c? không
bool isValid(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < N);
}

// In k?t qu?
void printSolution(std::vector<std::vector<int> >& board) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << board[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

// Hàm DFS d? tìm phuong án di tu?n cho con mã
bool knightTourDFS(int x, int y, int movei, std::vector<std::vector<int> s>& board,
                   std::vector<int>& xMove, std::vector<int>& yMove) {
    if (movei == N * N) {
        // T?t c? các ô trên bàn c? dã du?c di qua
        printSolution(board);
        return true;
    }

    for (int i = 0; i < 8; i++) {
        int nextX = x + xMove[i];
        int nextY = y + yMove[i];

        if (isValid(nextX, nextY) && board[nextX][nextY] == -1) {
            // Ðánh d?u ô (nextX, nextY) dã du?c di qua
            board[nextX][nextY] = movei;

            // Th? di ti?p t? ô (nextX, nextY)
            if (knightTourDFS(nextX, nextY, movei + 1, board, xMove, yMove)) {
                return true;
            }

            // Quay lui n?u không tìm du?c gi?i pháp
            board[nextX][nextY] = -1;
        }
    }

    return false;
}

// Hàm gi?i bài toán di tu?n c?a con mã
void solveKnightTour(int x, int y) {
    std::vector<std::vector<int>> board(N, std::vector<int>(N, -1));

    // Các bu?c di chuy?n c?a con mã
    std::vector<int> xMove = {2, 1, -1, -2, -2, -1, 1, 2};
    std::vector<int> yMove = {1, 2, 2, 1, -1, -2, -2, -1};

    // Ð?t v? trí ban d?u c?a con mã
    board[x][y] = 0;

    // G?i DFS d? tìm phuong án di tu?n
    if (!knightTourDFS(x, y, 1, board, xMove, yMove)) {
        std::cout << "Khong ton tai phuong an di tuan." << std::endl;
    }
}

int main() {
    int startX, startY;
    std::cout << "Nhap vi tri ban dau (x, y): ";
    std::cin >> startX >> startY;

    solveKnightTour(startX, startY);

    return 0;
}
