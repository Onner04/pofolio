#include <stdio.h>
#include <limits.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n], max = INT_MIN;
	int found = 0;
	for ( int i = 0 ; i < n; i++){
		scanf("%d", &a[i]);
	}
	for ( int i = 0 ; i < n; i++){
		if ( a[i] < 0 ){
			if ( a[i] > max){
				max = a[i];
				
			}
			found++;
		}
	}
	if ( found > 0){
		printf("%d", max);
		
	}else {
		printf("NOT FOUND");
	}

	}
