#include <stdio.h>


int double_it (int num)
    {   
        num *= 2;
        return num;
    }
int main() {
    int a;
    scanf("%d", &a);
    int result = double_it(a);
    printf("Double of %d is %d\n", a, result);
    return 0;
}