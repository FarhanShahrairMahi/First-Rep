#include <stdio.h>

int main()
{
    char ch;

    ch = '\0'; /*initialize ch*/
    while(ch!='A')
        ch = getchar();

    return 0;

    while((ch=getchar())!='b');

    return ch;
}
