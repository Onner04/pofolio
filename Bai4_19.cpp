#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // �?c s? N t? input

    int a[10000];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]); // �?c c�c ph?n t? c?a m?ng t? input
    }

    int tong = 0;
    for (int i = 0; i < N; i += 2) {
        tong += a[i]; // T�nh t?ng c�c ph?n t? c� v? tr� ch?n
    }

    printf("%d\n", tong); // In ra t?ng

    return 0;
}

