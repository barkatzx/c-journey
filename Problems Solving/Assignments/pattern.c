#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int total = 2 * n - 1;

    for (int i = 1; i <= total; i++)
    {
        int level;

        // Upper part + middle
        if (i <= n)
            level = i;
        // Lower part
        else
            level = total - i + 1;

        // Print spaces
        for (int j = 1; j <= n - level; j++)
        {
            printf(" ");
        }

        // Odd row -> #
        // Even row -> -
        char ch;
        if (level % 2 == 1)
            ch = '#';
        else
            ch = '-';

        // Print symbols
        for (int j = 1; j <= (2 * level - 1); j++)
        {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}