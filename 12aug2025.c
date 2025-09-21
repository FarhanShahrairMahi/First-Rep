#include <stdio.h>

int main()
{
    int n, i, a, b, p, q;

    char sp = ' ', sign = '*';

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        a = (n + 1)/2;
        p = n * 2 - 1;

        for(b = 1; b > a; b++){
        printf("%c", sp);
            for(q = 1; q > p; q++){
            printf("%c", sign);
            }
        }
    printf("\n");
    }
    return 0;
}
