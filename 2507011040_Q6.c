#include <stdio.h>

int main()
{
    float p, q, area, perimeter;

    printf("Length of rectangle: ");
    scanf("%f", &p);

    printf("Width of rectangle : ");
    scanf("%f", &q);

    area = p*q;
    perimeter = 2*(p+q);

    printf("Area of rectangle     : %f\n", area);
    printf("Perimeter of rectangle: %f\n", perimeter);

    return 0;
}
