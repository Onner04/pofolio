#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Ð?c s? N t? input

    int a[10000];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]); // Ð?c các ph?n t? c?a m?ng t? input
    }

    int tong = 0;
    for (int i = 0; i < N; i += 2) {
        tong += a[i]; // Tính t?ng các ph?n t? có v? trí ch?n
    }

    printf("%d\n", tong); // In ra t?ng

    return 0;
}

