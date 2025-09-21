#include <stdio.h>
#include <string.h>

int main()
{
    int score;
    char grade[10];

    printf("Enter yout score (0-100):");
    scanf("%d", &score);

    if(score < 0 || score > 100){
        printf("Invalid score, Please enter a number between 0 and 100.\n");
        return 1;
    }
    if(score >= 80)         strcpy(grade, "A+"); //grade= "A+";
    else if(score >= 75)    printf("A");
    else if(score >= 70)    strcpy(grade, "A-");
    else if(score >= 65)    strcpy(grade, "B+");
    else if(score >= 60)    strcpy(grade, "B");
    else if(score >= 55)    strcpy(grade, "B-");
    else if(score >= 50)    strcpy(grade, "C+");
    else if(score >= 45)    strcpy(grade, "C");
    else if(score >= 40)    strcpy(grade, "D");
    else                    strcpy(grade, "F");

    printf("Your letter grade is: %s\n", grade);

    return 0;
}
