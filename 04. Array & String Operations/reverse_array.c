
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = n - 1; i >= 0; i--) {
        scanf("%d", &arr[i]);
    }
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

/*Explaination: This program takes an integer n as input and creates an array of size n. It then reads n integers into the array and prints them in reverse order. */