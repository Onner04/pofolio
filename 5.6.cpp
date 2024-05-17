#include<stdio.h>
int main(){
	int m , n ;
	scanf("%d %d",&n , &m);
	int mang1[n][m],mang2[n][m];
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			scanf("%d",&mang1[i][j]);
		}
	}
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			scanf("%d",&mang2[i][j]);
		}
	}

	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
		printf("%dv",mang1[i][j]+mang2[i][j]);
		}
			printf("\n");
	}
}
