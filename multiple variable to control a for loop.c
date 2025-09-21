#include <stdio.h>

int main(){

    int i, j;

    //i starts from 1, j starts from 10
    //loop runs while i <= 5 and j >= 6

    for(i = 1, j = 10; i <= 5 && j >= 6; i++,j--){
        printf("i=%d, j=%d\n", i, j);
    }

    return 0;
}
