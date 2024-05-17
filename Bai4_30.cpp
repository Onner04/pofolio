#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for ( int i = 0; i < n; i++){
		scanf("%d", &a[i]);	
	}
	int duongcuoi = -1;
	for ( int i = n - 1; i >= 0; i--){
		if ( a[i] > 0){
			duongcuoi = a[i];
			break;
		}
	}
	if ( duongcuoi != -1){
		printf("%d", duongcuoi);
	}else {
		printf("-1");
	}
}
