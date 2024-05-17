#include <stdio.h>
#include <limits.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int min = INT_MAX;
	int max = INT_MIN;
	for ( int i = 0 ; i < n; i++){
		scanf("%d", &a[i]);
		if ( max < a[i]){
			max = a[i];
	} if ( min > a[i]){
		min = a[i];
	}
	}
	printf("%d %d", min, max);
}
