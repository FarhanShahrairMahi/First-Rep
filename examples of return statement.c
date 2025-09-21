#include <stdio.h>

int add(int a, int b){
    return a+b; // returns the sum of a and b
}

void greet(){
    printf("Hello!\n");
    return; // optional, but can be used to exit early
}

int main(){
    int result=add(3,5);
    printf("Sum: %d\n", result);//sum:8
        greet();

    return 0; //exits main function with status 0
}
