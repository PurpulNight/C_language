#include<stdio.h>

void helloWorld(int count);

int main() {
    int count;
    printf("Enter the number of times to print 'Hello, World!': ");
    scanf("%d", &count);
    helloWorld(count);
}

void helloWorld(int count) {
    if (count == 0){
        return;
    }
    printf("Hello, World!\n");
    helloWorld(count - 1);
}
