#include <stdio.h>

int main() {
    int arr[5];
    for (int i = 0; i <= 4; i++) {
        scanf("%d", &arr[i]);
        printf("a[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

/*Explanation: This program takes 5 integers as input from the user and stores them in an array. It then prints each element of the array along with its index.*/