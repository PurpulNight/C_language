#include <stdio.h>
void hello(); // Function prototype


void hello() {      // Function definition

    printf("Hello World!\n");
}   


int main() {
    hello();    // Function call
    return 0;
}