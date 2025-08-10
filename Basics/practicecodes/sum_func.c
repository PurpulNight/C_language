#include <stdio.h>
int sum(int a, int b); 
int main(){
    int a, b, sum
    printf('Enter first number: \n');
    scanf("%d", &a);
    printf("Enter second number: \n");
    scanf("%d", &b);
    sum = sum(a, b); 
    printf("Sum is: %d\n", sum);

}

int sum(int a, int b) { 
    return a + b; 
}