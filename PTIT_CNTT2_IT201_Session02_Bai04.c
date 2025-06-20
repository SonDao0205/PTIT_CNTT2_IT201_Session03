//
// Created by SonwDao on 17/6/25.
//
#include <stdio.h>
#include <stdlib.h>

int maxNumber(int **array,int m, int n) {
    int max = array[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }
    return max;
}

int minNumber(int **array,int m, int n) {
    int min = array[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (array[i][j] < min) {
                min = array[i][j];
            }
        }
    }
    return min;
}

int main() {
    int m,n;
    // int array[100][100];
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
    printf("Số lớn nhất trong mảng là : %d\n",maxNumber(array,m,n));
    printf("Số nhỏ nhất trong mảng là : %d\n",minNumber(array,m,n));
    free(array);

}