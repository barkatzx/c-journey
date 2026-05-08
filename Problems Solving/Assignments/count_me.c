#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count2 = 0, count3 = 0;

    for(int i = 0; i < N; i++) {
        long long x;
        scanf("%lld", &x);

        if(x % 2 == 0) {
            count2++;
        } else if(x % 3 == 0) {
            count3++;
        }
    }

    printf("%d %d\n", count2, count3);

    return 0;
}