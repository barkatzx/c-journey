#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int total_workers = M1 + M2;

        int new_days = (M1 * D) / total_workers;
        int result = D - new_days;

        printf("%d\n", result);
    }

    return 0;
}