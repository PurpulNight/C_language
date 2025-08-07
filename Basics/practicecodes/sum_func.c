#include <stdio.h>
void sum(int num_1 ,int num_2);

void sum(int num_1, int num_2) {
    printf("Sum is: %d\n", num_1 + num_2);
}

int main(){
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    sum(n1 , n2);
}
