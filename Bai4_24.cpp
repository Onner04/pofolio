#include <stdio.h>
#include <limits.h>

int main() {
    long n;
    scanf("%ld", &n);
    long a[n];
    long max = LONG_MIN;
    long maxthuhai = LONG_MIN;
    long maxthuhai_vitri = -1; 
    long vitri = -1;
    
    for (long i = 0; i < n; i++) {
        scanf("%ld", &a[i]);
        if (a[i] > max) {
            maxthuhai = max;
            maxthuhai_vitri = vitri; 
            max = a[i];
            vitri = i;
        } else if (a[i] > maxthuhai && a[i] != max) {
            maxthuhai = a[i];
            maxthuhai_vitri = i; 
    }
    
   
    
}
 if (maxthuhai != LONG_MIN) {
       printf("%ld %ld", maxthuhai, maxthuhai_vitri + 1);
    } 
}

