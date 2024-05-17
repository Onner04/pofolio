#include<stdio.h>
int main (){
	int n , m ; 
	int mang[n][m];
	scanf("%d %d",&m , &n);
	for(int i=1; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			scanf("%d ",&mang[i][j]);
		
		}
	}
	for(int i=1; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
		
			printf("%d ",mang[i][j]);
		}
	}
	printf("/n");
}
