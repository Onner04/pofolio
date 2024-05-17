#include<stdio.h> 

int main() {
    int n, a[100], sum = 0, count = 0;
    float avg;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    avg = (float)sum / n;
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > avg) {
            printf("%d ", i + 1);
            count++;
            found = 1; 
        }
    }
    if(found == 0) { 
        printf("NOT FOUND");
    }
    return 0;
}
