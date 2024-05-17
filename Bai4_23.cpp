#include <stdio.h>
#include <limits.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int min = INT_MAX;
	int count = 0;
	for ( int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for ( int i = 0; i < n; i++){
		if ( min > a[i]){
			min = a[i];
		}
	}
	for ( int i = 0; i < n; i++){
		if ( min == a[i]){
			count++;
		}
	}
	printf("%d %d", min, count);
}
