// Print N to 1 using Recursion

#include <stdio.h>
void hello(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d\n", n);
    hello(n-1);
}

int main() {
    int n = 5;
    hello(n);
    return 0;
}

/*Explaination: This program prints numbers from 5 to 1 using recursion. The base case is when n equals 0, at which point the function returns without making further recursive calls. */