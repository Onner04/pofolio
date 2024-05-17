#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int sum = 0;
    int dem = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            sum = sum + a[i];
            dem++;
        }
    }
    
    if (dem > 0) {
        printf("%.2f", (float)sum / dem);
    } else {
        printf("0.00"); // Tru?ng h?p không có s? ? v? trí l?.
    }
    
    return 0;
}

