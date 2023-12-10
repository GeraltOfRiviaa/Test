#include <stdint.h>

int main() {
    int num;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        num += 5;
        printf("The result is: %d\n", num);

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
    } while(choice == 'y' || choice == 'Y');

    return 0;
}