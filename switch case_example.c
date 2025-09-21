#include <stdio.h>

int main()
{
    int x = 2; switch(x){ case 1: printf("One\n");break;}

    long value = 100000L; switch(value){case 100000L: printf("Matched 100000L\n"); break;}

    char ch = 'b'; switch(ch){case'a':printf("You typed a\n"); break;}

    short num = 100; switch(num){case 1: printf("You chose One\n");break;}

    enum Day{SUN, MON, TUE, WED, THU, FRI, SAT}; enum Day today = 1;
    switch(today){case SUN:printf("Today is Sunday\n"); break;}

    return 0;
}
