#include <stdio.h>
#include <math.h>

int main() {
    double x;

    printf("Nhap gia tri: ");
    scanf("%lf", &x);

    printf("x^2 = %.2lf\n", pow(x, 2));
    printf("x^3 = %.2lf\n", pow(x, 3));
    printf("x^4 = %.2lf\n", pow(x, 4));

    return 0;
}
