#include<stdio.h>
int main(){
	int n ; 
	scanf("%d",&n);
	int mang[n][n];
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			scanf("%d",&mang[i][j]);
		}
	}
	int cot=0 , hang=0 ;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			if(i%2!=0){
				hang+=mang[i][j];
				cot+=mang[j][i];
			}
		}
	}
	printf("%d",hang+cot);
}
