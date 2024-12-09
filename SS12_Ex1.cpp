#include <stdio.h>

int tinhtong(int so1, int so2) {
    return so1 + so2;
}

int main() {
    int a, b, tong;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    tong = tinhtong(a, b);

    printf("Tong cua hai so la: %d\n", tong);

    return 0;
}

