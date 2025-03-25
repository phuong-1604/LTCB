#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);

    if (b != 0) {
        printf("a / b = %.2f\n", (float)a / b);
    } else {
        printf("Khong the chia cho 0!\n");
    }

    return 0;
}
