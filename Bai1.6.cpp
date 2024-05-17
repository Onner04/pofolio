#include <stdio.h>

int main() {
    int a, hh, mm, ss;

    scanf("%d", &a);
    hh = a/ 3600;     
    mm = (a-hh *3600)/60;      
    ss = a-hh*3600-mm*60;

    printf("%02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}

