#include <stdio.h>

int main()
{
    int a, b, c;
    float x, y, z;

    a = 11;
    b = 19;
    x = 56.234567;

    printf(" int a   = %d\n int b   = %d\n float x = %f\n", a, b, x);

    y = a + x;
    printf("Implicit type conversion, a+x, int to float: %f\n", y);

    c = (int)x;
    printf("Explicit type conversion, float to int     : %d\n", c);

    z = (float)b;
    printf("Explicit type conversion, int to float     : %f\n", z);

    return 0;
}
