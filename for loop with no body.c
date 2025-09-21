#include <stdio.h>

int main()
{
    int i, sum=0;

    for(i = 1; i <= 100; sum+=i++);//note the semicolon at the end(empty body)
    printf("sum=%d\n", sum);

    //sum+=i++ : sum = sum + i and then i = i + 1

    return 0;
}
