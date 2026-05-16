// Print From 1 To N Using Recursion

#include <stdio.h>

void hello(int n) {
    if (n == 6) { 
        return;
    }
    printf("%d\n ", n);
    hello(n + 1);
};

int main() {
    int n = 1;
    hello(n);
    return 0;
}

/*Explaination: This program prints numbers from 1 to 5 using recursion. The base case is when n equals 6, at which point the function returns without making further recursive calls. */