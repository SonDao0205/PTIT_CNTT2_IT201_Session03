//
// Created by SonwDao on 17/6/25.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nhập số phần tử : ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Số lượng phần tử không được âm!");
        return 0;
    }
    else if (n == 0) {
        printf("Số lượng phần tử phải lớn hơn 0!");
        return 0;
    }
    int *array = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) {
        printf("Nhập array[%d] : ",i);
        scanf("%d", &array[i]);
    }
    int max = array[0];
    for(int i=0;i<n;i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    printf("Số lớn nhất trong mảng là : %d\n",max);
    free(array);
}