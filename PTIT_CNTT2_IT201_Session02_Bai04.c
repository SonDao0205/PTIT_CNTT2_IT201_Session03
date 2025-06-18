//
// Created by SonwDao on 17/6/25.
//
#include <stdio.h>
#include <stdlib.h>

float average(int array[],int n) {
    int sum = 0;
    int count = 0;
    for(int i=0;i<n;i++) {
        if (array[i] % 2 == 0) {
            sum += array[i];
            count++;
        }
    }
    return (float)sum/count;
}


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

    printf("Trung bình cộng các số chẵn là : %f",average(array,n));
    free(array);
}