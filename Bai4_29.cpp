#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for ( int i = 0; i < n; i++){
		scanf("%d", &a[i]);	
	}
	int amcuoi = 1;
	for ( int i = n - 1; i >= 0; i--){
		if ( a[i] < 0){
			amcuoi = a[i];
			break;
		}
	}
	if ( amcuoi != 1){
		printf("%d", amcuoi);
	}else {
		printf("1");
	}
}
