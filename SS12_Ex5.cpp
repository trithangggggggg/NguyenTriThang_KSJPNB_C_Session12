#include <stdio.h>

int check(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1;
}
int main() {
    int a, b;
    printf("Nhap vao so nguyen thu nhat: ");
    scanf("%d", &a);
    
    printf("Nhap vao so nguyen thu hai: ");
    scanf("%d", &b);
    if (check(a)) {
        printf("%d la so nguyen to.\n", a);
    } else {
        printf("%d khong phai la so nguyen to.\n", a);
    }
    if (check(b)) {
        printf("%d la so nguyen to.\n", b);
    } else {
        printf("%d khong phai la so nguyen to.\n", b);
    }
    
    return 0;
}

