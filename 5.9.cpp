#include<stdio.h>
int main(){
	int n ; 
	scanf("%d",&n);
	int mang[n][n];
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			scanf("%d",&mang[i][j]);
		}
	}
	int tong=0 ;
	for(int i=0 ; i<n ; i++){
		
			tong+=mang[i][i];
		
	}
	for(int i=0 ; i<n ; i++){
	
			tong+=mang[i][n-i-1];
		}
	
	printf("%d",tong);
}
