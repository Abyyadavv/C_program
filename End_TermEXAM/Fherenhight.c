#include <stdio.h>

int main() {
    double c, f;
    // Celsius to Fahrenheit
    printf("Enter Celsius: ");
    scanf("%lf", &c);
    f = (c * 9.0/5.0) + 32.0;
    printf("%.2lf C = %.2lf F\n", c, f);

    // Fahrenheit to Celsius
    printf("Enter Fahrenheit: ");
    scanf("%lf", &f);
    c = (f - 32.0) * 5.0/9.0;
    printf("%.2lf F = %.2lf C\n", f, c);
    return 0;
}
