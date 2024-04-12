#include <iostream>
#include <vector>

// K�ch thu?c b�n c?
#define N 8

// Ki?m tra xem � (x, y) c� n?m tr�n b�n c? kh�ng
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

// H�m DFS d? t�m phuong �n di tu?n cho con m�
bool knightTourDFS(int x, int y, int movei, std::vector<std::vector<int> s>& board,
                   std::vector<int>& xMove, std::vector<int>& yMove) {
    if (movei == N * N) {
        // T?t c? c�c � tr�n b�n c? d� du?c di qua
        printSolution(board);
        return true;
    }

    for (int i = 0; i < 8; i++) {
        int nextX = x + xMove[i];
        int nextY = y + yMove[i];

        if (isValid(nextX, nextY) && board[nextX][nextY] == -1) {
            // ��nh d?u � (nextX, nextY) d� du?c di qua
            board[nextX][nextY] = movei;

            // Th? di ti?p t? � (nextX, nextY)
            if (knightTourDFS(nextX, nextY, movei + 1, board, xMove, yMove)) {
                return true;
            }

            // Quay lui n?u kh�ng t�m du?c gi?i ph�p
            board[nextX][nextY] = -1;
        }
    }

    return false;
}

// H�m gi?i b�i to�n di tu?n c?a con m�
void solveKnightTour(int x, int y) {
    std::vector<std::vector<int>> board(N, std::vector<int>(N, -1));

    // C�c bu?c di chuy?n c?a con m�
    std::vector<int> xMove = {2, 1, -1, -2, -2, -1, 1, 2};
    std::vector<int> yMove = {1, 2, 2, 1, -1, -2, -2, -1};

    // �?t v? tr� ban d?u c?a con m�
    board[x][y] = 0;

    // G?i DFS d? t�m phuong �n di tu?n
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
