#include <stdio.h>
#include <math.h>
int main(){
	int  n;
	scanf("%d", &n);
	int a[n], count = 0;
	for ( int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for ( int i = 0; i < n; i++){
		if ( (sqrt(a[i]) * sqrt (a[i]) == a[i]) && a[i] > 1){
			printf("%d ", a[i]);
			count++;
	}
	}
	if ( count == 0) printf("NOT FOUND");
	
	}

