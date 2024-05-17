#include <stdio.h>
void Count(int a[], int n){
	int b[n];
	int x = 0;
	int counta[n];
	counta[0] = 1;
	b[0] = a[0];
	for ( int i = 1; i < n; i++){
		int dem = 0;
		for ( int j = 0; j <= x ;j++){
			if ( a[i] == b[j]){
				dem++;
				count a[j]++;
				break;
			}
		} if ( dem == 0){
			x++;
			b[x] = a[i];
			counta[x] = 1;
	}	
		}
		printf("%d", x + 1);
		
		
}
int main(){
	int n;
	scanf("%d", &n);

	int a[n];
	for ( int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	Count(a, n);
}
