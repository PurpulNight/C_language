#include <stdio.h>
int main(){
    int num;
    int sum = 0;
    
    printf("Enter a number: ");
    scanf("%d" , &num);

    for(int i = 1; i <= num; i++){
        sum+=i;
    }
    printf("Sum of first %d natural numbers is: %d\n", num, sum);
}