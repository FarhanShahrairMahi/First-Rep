#include <stdio.h>

int main()
{

    printf("The size of 'int' type variable (in bytes)   : %zu\n", sizeof(int));
    printf("The size of 'float' type variable (in bytes) : %zu\n", sizeof(float));
    printf("The size of 'char' type variable (in bytes)  : %zu\n", sizeof(char));
    printf("The size of 'double' type variable (in bytes): %zu", sizeof(double));

    return 0;
}
