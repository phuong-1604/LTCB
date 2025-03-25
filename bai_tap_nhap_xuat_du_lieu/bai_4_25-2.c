#include <stdio.h>
#include <math.h>
int main() {
    double r, dienTich, theTich;
    const double PI = 3.141592653589793;

    printf("Nhap ban kinh hinh cau: ");
    scanf("%lf", &r);

    dienTich = 4 * PI * pow(r, 2);
    theTich = (4.0 / 3.0) * PI * pow(r, 3);

    printf("Dien tich hinh cau la: %.2lf\n", dienTich);
    printf("The tich hinh cau la: %.2lf\n", theTich);

    return 0;
}
