#include <stdio.h>
#include <stdbool.h>
bool checkTF ( int a[], int n){
	for ( int i = 0 ; i < n / 2; i++){
		if ( a[i] != a[n-1-i]) return false;
	}
	return true;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for ( int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	if ( checkTF(a, n) == true){
		printf("TRUE");
	}else {
		printf("FALSE");
	}
}
