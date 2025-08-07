#include <stdio.h>

int main(){
    int num;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(num ; num >= 1 ; num--){
        fact*=num;
    }
    printf("Factorial: %d\n", fact);
    return 0;
}