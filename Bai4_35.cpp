#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int sum = 0;
	for ( int i = 0; i < n; i++){
		scanf("%d", &a[i]);	
	}
	for ( int i = 0; i < n; i++){
		if ( a[i] % 2 == 0 && a[i] % 5 == 1){
					printf("%d", a[i]);
		}
		
}
		
}
