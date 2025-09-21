#include <stdio.h>

int main()
{
        int a, b, max;
        printf("a= "); scanf("%d", &a);
        printf("b= "); scanf("%d", &b);

        max = (a>b)?a:b;
        printf("Maximim of %d and %d is : %d\n", a, b, max);

        return 0;
}
