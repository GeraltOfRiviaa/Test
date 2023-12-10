//This is made by Copilot, not me :)
#include <stdio.h>

int main() {
    int num;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        num += 5;
        printf("The result is: %d\n", num);

        do {
            printf("Do you want to continue? (y/n): ");
            scanf(" %c", &choice);

            if (choice != 'y' && choice != 'n') {
                printf("Try again.\n");
            }
        } while (choice != 'y' && choice != 'n');

    } while (choice == 'y' || choice == 'Y');

    return 0;
}