#include<stdio.h>
int main(){
	int n , m ;
	int mang[n][m];
	scanf("%d %d",&n,&m);
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			scanf("%d",&mang[i][j]);
		}
	}
	int d= 0 , c=0 ;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			d+=mang[i][j];
		}
		printf("%d ",d);
		d=0;
	}
    printf("\n");
	for(int i=1 ; i<=m ; i++){
		for(int j=1 ; j<=n ;j++ ){
			c+=mang[j][i];
		}
		printf("%d ",c);
		c=0 ;
	}

}
