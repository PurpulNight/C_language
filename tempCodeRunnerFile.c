#include <stdio.h>

int main() {
    int n;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n % 7 == 0) {
            printf("The number is a multiple of 7. Thank you.\n");
            break;
        }
    }

    return 0;
}
