#include <stdio.h>

int giaithua(int n) {
    int ketqua = 1;
    for (int i = 1; i <= n; i++) {
        ketqua = ketqua * i;
    }
    return ketqua;
}

int main() {
    int so, ketqua;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &so);

    if (so < 0) {
        printf("Khong tinh duoc giai thua cho so am \n");
    } else {
        ketqua = giaithua(so);
        printf("Giai thua cua %d la: %d\n", so, ketqua);
    }

    return 0;
}

