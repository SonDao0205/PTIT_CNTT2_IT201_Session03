//
// Created by SonwDao on 20/6/25.
//
#include <stdio.h>
#include <stdlib.h>
int mainDiagonal(int **array,int m,int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += array[i][i];
    }
    return sum;
}

int secondaryDiagonal(int **array,int m,int n) {
    if (m > n) {
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i][n-i-1];
    }
    return sum;
}

int main() {
    int m,n;
    printf("Nhập số hàng : ");
    scanf("%d", &m);
    printf("Nhập số cột : ");
    scanf("%d", &n);
    if (m < 0 || n < 0 || m > 1000 || n > 1000) {
        printf("Số hàng hoặc cột không hợp lệ!");
        return 0;
    }
    int **array = (int**)malloc(sizeof(int*) * m);
    for (int i = 0; i < m; i++) {
        array[i] = (int*)malloc(sizeof(int) * n);
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhập array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    mainDiagonal(array, m, n) == 0 ? printf("Không có đường chéo chính!\n") : printf("Tổng đường chéo chính : %d\n",mainDiagonal(array, m, n));
    secondaryDiagonal(array, m, n) == 0 ? printf("Không có đường chéo phụ!\n") : printf("Tổng đường chéo phụ : %d\n",secondaryDiagonal(array, m, n));
    free(array);

}