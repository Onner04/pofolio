#include <stdio.h>
#include <limits.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int max = INT_MIN;
	int count = 0;
	for ( int i = 0; i < n;i++){
		scanf("%d", &a[i]);
		
	}
	for ( int i = 0;i < n;i++){
		if ( max < a[i]){
			max = a[i];
		}
		}
			printf("%d ", max);
	for ( int i = 0; i < n; i++){
		if ( max == a[i]){
			printf("%d", i + 1);
			break;
		}
	}
	
}
