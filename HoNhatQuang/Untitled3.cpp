#include <stdio.h>
#define N 8

void print_solution(int board[N][N]) {
	
	
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
            printf("\n");
         
        
	}


int is_safe(int board[N][N], int row, int col) {
    // Kiem tra cot n�y
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) {
            return 0;
        }
    }

    // Kiem tra duong ch�o tr�n b�n tr�i
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return 0;
        }
    }

    // Kiem tra duong ch�o tr�n b�n phai
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i][j] == 1) {
            return 0;
        }
    }

    return 1;
}

int solve_n_queens(int board[N][N], int row) {
    // �� dat duoc tat ca c�c qu�n hau
    
     
        
    if (row == N) {
    
        print_solution(board);
        return 1;
    }
    


   
      int solution_count = 0;

    // Thu dat qu�n hau v�o tung � trong h�ng hien tai
    for (int col = 0; col < N; col++) {
        if (is_safe(board, row, col)) {
            board[row][col] = 1;

            // �e quy de dat qu�n hau v�o h�ng tiep theo
            solution_count += solve_n_queens(board, row + 1);
	
            // Quay lui - looi bo qu�n hau khoi � dang x�t
            board[row][col] = 0;
        }
     
        
}
    return solution_count;

}



int main() {
    int board[N][N] = {0};
   
    int total_solutions = 0;
   
    total_solutions +=solve_n_queens(board, 0);

    printf("T?ng c�ch gi?i: %d\n", total_solutions);

    return 0;
}
