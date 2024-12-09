#include <stdio.h>

void inphantu(int mang[], int kichthuoc) {
    for (int i = 0; i < kichthuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
}

int main() {
    int mang[5] = {1, 2, 3, 4, 5};

    printf("Cac phan tu trong mang la: ");
    inphantu(mang, 5);

    return 0;
}

