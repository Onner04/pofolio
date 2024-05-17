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
	int s=0 ,d=0 ;
	for(int i=1; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			s+=mang[i][j];
		}
		printf("%d ",s);
	
		s=0 ;
	}
		printf("\n");
	for(int i=1 ; i<=m ; i++){
		for(int j=1 ; j<=n ; j++){
			d+=mang[j][i];
		}
		
		printf("%d ",d);
		d=0 ;
	}
}
