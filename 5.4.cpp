#include<stdio.h>
int main(){
	int n , m ;
	scanf("%d %d",&n , &m);
	int mang[n][m];
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			scanf("%d",&mang[i][j]);
		}
	} 
	for(int i=1 ; i<=m ; i++ ){
		for(int j=1 ; j<=n; j++){
			printf("%d ",mang[j][i]);
		}
		printf("\n");
	}
	
}
