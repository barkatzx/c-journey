#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        char s[10001];
        scanf("%s", s);

        int upper = 0, lower = 0, digit = 0;

        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                upper++;
            } 
            else if(s[i] >= 'a' && s[i] <= 'z') {
                lower++;
            } 
            else if(s[i] >= '0' && s[i] <= '9') {
                digit++;
            }
        }

        printf("%d %d %d\n", upper, lower, digit);
    }

    return 0;
}