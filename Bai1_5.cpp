#include <stdio.h>

int main() {
    int dd, mm;
	long long yy;
    
    scanf("%d%d%lld", &dd, &mm, &yy);
    
    printf("%02d/%02d/%02d\n", dd, mm, yy);

    return 0;
}

