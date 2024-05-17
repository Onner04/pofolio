#include<stdio.h>
int main(){
	int n  ;
	scanf("%d",&n);
	int mang[n][n];
	for(int i=1; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			scanf("%d",&mang[i][j]);
		}
	}
	int  tong=0 , soluong=0 ;
	for(int i=1 ; i<=n ; i++){
			tong+=mang[i][i];
			soluong++ ;
	}
	printf("%.3f",(float)tong/soluong);
}
