#include <stdio.h>

int main() {
    long long a, b;
    
    scanf("%lld%lld", &a, &b);
    
    if (b == 0) {
        return 1;
    }
    
    printf("%lld", a + b);
    printf(" %d\n", a - b);
    printf("%lld", a * b);
    printf(" %.2f\n", (float)a / b);
    
    return 0;
}

