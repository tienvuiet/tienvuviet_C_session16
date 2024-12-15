#include <stdio.h>

int timkiem(int *arr, int n, int size) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == n) {
            return i;
        }
    }
    return -1;
}
int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int n;
    printf("Nhap gia tri muon tim kiem: ");
    scanf("%d", &n);
    int vitri = timkiem(a, n, 5);
    if (vitri != -1) {
        printf("Gia tri %d duoc tim thay o vi tri: %d\n", n, vitri);
    } else {
        printf("Gia tri %d khong ton tai trong mang.\n", n);
    }
    return 0;
}
