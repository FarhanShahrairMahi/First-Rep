#include <stdio.h>

int main()
{
    int l, a, t, s, b;

    printf("enter desired line count:");
    scanf("%d", &l);

    t = 2*l - 1;
    s = l;
    b = 1;

    for(a = 1; a <= l; a++){
        while(s >= 0){
            printf(" ");
        }
        s = s - 1;
        while(b <= t){
            printf("*");
        }
        b = b + 1;
        printf("\n");
    }
return 0;
}
