#include <stdio.h>
float c_to_f(float celsius);

int main() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = c_to_f(celsius);
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}

float c_to_f(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
