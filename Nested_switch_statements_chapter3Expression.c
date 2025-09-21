#include <stdio.h>

int main()
{
    int mainChoice, subChoice;

    printf("Main Menu:\n");
    printf("1. Fruits\n");
    printf("2. Vegetables\n");
    printf("Enter your choice: ");
    scanf("%d",&mainChoice);

    switch(mainChoice) {
        case 1:
            printf("Fruit Menu:\n");
            printf("1.Apple\n");
            printf("2.Banana\n");
            printf("Enter your choice: ");
            scanf("%d",&subChoice);

            switch(subChoice){
                case 1:
                    printf("You selected Apple.\n");
                    break;
                case 2:
                    printf("You selected Banana.\n");
                    break;
                default:
                    printf("Invalid fruit choice.\n");
            }
            break;

        case 2:
            printf("Vegetables Menu:\n");
            printf("1.Carrot\n");
            printf("2.Spinach\n");
            printf("Enter your choice:");
            scanf("%d",&subChoice);

            switch(subChoice){
                case 1:
                    printf("You selected carrot\n");
                    break;
                case 2:
                    printf("You selected spinach\n");
                    break;
                default:
                    printf("Invalid vegetable choice\n");
            }
            break;

        default:
            printf("Invalid main menu choice.\n");
    }

    return 0;
}
