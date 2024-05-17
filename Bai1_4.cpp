#include <stdio.h>

int main() {
    long long a, b;
    
    scanf("%lld%lld", &a, &b);
    
    if (a < 0) {
        return 1;
    }
    if (b > 100000){
    	return 1;
	}
	
    printf("%lld", (a+b)*2);
    printf(" %lld", a*b);

    return 0;
}

