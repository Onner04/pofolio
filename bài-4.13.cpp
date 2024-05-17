#include <stdio.h>

int main() {
    int n, arr[1000]={0} ;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        arr[num]++;
    }
    int m = 0;
    for (int i = 0; i <= 1000; i++) {
        if (arr[i] > 0) {
            m++;
        }
    }
    printf("%d\n", m);
    for (int i = 0; i <= 1000; i++) {
        if (arr[i] > 0) {
            printf("%d %d\n", i, arr[i]);
        }
    }
    return 0;
}
