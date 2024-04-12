#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // M? file text
  FILE *fp = fopen("matrix.txt", "r");
  if (fp == NULL) {
    printf("Không th? m? file text.\n");
    return 1;
  }

  // Ð?c kích thu?c c?a ma tr?n
  int n;
  fscanf(fp, "%d", &n);

  // Kh?i t?o ma tr?n k?
  int matrix[][] = malloc(sizeof(int [] ));
  for (int i = 0; i < n; i++) {
    matrix[i][j] = calloc(n, sizeof(int));
  }

  // Ð?c ma tr?n k? t? file text
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      fscanf(fp, "%d", &matrix[i][j]);
    }
  }

  // Ð?m s? lu?ng ma tr?n k?
  int total_matrices = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (matrix[i][j] == 1) {
        total_matrices++;
      }
    }
  }

  // Ðóng file text
  fclose(fp);

  // In ra s? lu?ng ma tr?n k?
  printf("S? lu?ng ma tr?n k? là %d\n", total_matrices);

  // Gi?i phóng b? nh?
  for (int i = 0; i < n; i++) {
    free(matrix[i]);
  }
  free(matrix);

  return 0;
}

