#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_N 100
#define MAX_ITER 1000

int n; // so luong phan tu trong tap hop
int S[MAX_N]; // tap hop các phan tu
int S1[MAX_N], S2[MAX_N]; // hai tap con
int bestS1[MAX_N], bestS2[MAX_N]; // hai tap con tot nhat
int bestDiff; // hieu sa tot nhat

// Hàm tính tong các phan tu trong mang
int sum(int arr[], int size) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        s += arr[i];
    }
    return s;
}

// Hàm phân chia tap hop thành hai tap con
void partition(int S1[], int S2[], int size) {
    // Khoi tao tap S1 và S2
    for (int i = 0; i < size; i++) {
        if (rand() % 2 == 0) {
            S1[i] = S[i];
            S2[i] = 0;
        } else {
            S1[i] = 0;
            S2[i] = S[i];
        }
    }
// Tìm hieu so cua hai tap con
    int diff = abs(sum(S1, size) - sum(S2, size));
    // Luu lai hai tap con tot nhat
    if (diff < bestDiff) {
        bestDiff = diff;
        for (int i = 0; i < size; i++) {
            bestS1[i] = S1[i];
            bestS2[i] = S2[i];
        }
    }
}

// Hàm thuc hien thuat toán Random Restart Hill Climbing
void randomRestartHillClimbing(int size) {
    // Khoi tao giá tri tot nhat
    bestDiff = sum(S, size);
    for (int i = 0; i < MAX_ITER; i++) {
        // Phân chia tap hop thành hai tap con
        partition(S1, S2, size);
    }
}

int main() {
    // Khoi tao bo sinh so ngau nhiên
    srand(time(NULL));
    // Nhap tap hop S
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    
    printf("Nhap tap hop S:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &S[i]);
    }
    // Thuc hien thuat toán Random Restart Hill Climbing
    randomRestartHillClimbing(n);
    // Kiem tra ket qua
    if (bestDiff == 0) {
        printf("Hai tap con co tong bang nhau:\n");
        printf("S1: ");
        for (int i = 0; i < n; i++) {
            if (bestS1[i] != 0) {
                printf("%d ", bestS1[i]);
            }
        }
        printf("\nS2: ");
        for (int i = 0; i < n; i++) {
            if (bestS2[i] != 0) {
                printf("%d ", bestS2[i]);
            }
        }
    } else {
        printf("Khong the phan chia tap hop thanh hai tap con co tong bang nhau.\n");
    }
    return 0;
}
