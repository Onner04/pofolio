#include<stdio.h>
int main(){
	int n  ; 
	scanf("%d",&n);
	int mang[n][n];
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			scanf("%d",&mang[i][j]);
		}
	}
	int count=0 ; 
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			if(mang[i][j]!=mang[j][i]){
				count++ ;
			}
		}
	}
	if(count!=0){
		printf("FALSE");
	}
	else
	printf("TRUE");
}
