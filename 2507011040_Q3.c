#include <stdio.h>

int main()
{
    int p;
    float q;
    char r;
    double s;

    p = 99;
    q = 99.99;
    r = 'A';
    s = 99.987654321;

    printf("%d\n", p);
    printf("%0.2f\n", q);
    printf("%c\n", r);
    printf("%0.9lf", s);

    return 0;
}
