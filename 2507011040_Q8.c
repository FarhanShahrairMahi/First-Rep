#include <stdio.h>

int main()
{
    int a, b, c;

    a = 5;
    b = 9;

    printf("value of a : %d\n", a);
    printf("value of b : %d\n", b);

    c = a;

    a = b;
    printf("value of a (by swapping): %d\n", a);

    b = c;
    printf("value of b (by swapping): %d\n", b);

    return 0;
}
