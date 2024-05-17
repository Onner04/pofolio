#include <math.h>
int Xxanhat ( int a[], int n, int x){
	int max = abs(a[0] - x);
	int j = 0;
	for ( int i = 0; i < n; i++){
		if ( max < abs(a[i] - x)){
			max = abs(a[i] - x);
			j = i;
		}
	}
	return a[j];

}
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];

	for ( int i = 0 ; i < n; i++){
		scanf("%d", &a[i]);
		
	}
	int x;
	scanf("%d", &x);
	 int result = Xxanhat( a, n, x);
	printf("%d", result );
}
