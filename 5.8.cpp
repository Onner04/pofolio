#include<stdio.h>
int main(){
	int n ;
	scanf("%d ",&n  );
	int mang[n][n];
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			scanf("%d",&mang[i][j]);
		}
	}
	int ngang , doc , cheo ;
	for(int i=1 ; i<=n ; i++ ){
		for(int j=1 ; j<= n ; j++){
			ngang = mang[i][j];
		}
	}
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			doc=mang[j][i];
		}
	}
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			cheo=mang[i][i];
		}
	}
	if(ngang==doc&&doc==cheo){
		printf("TRUE");
	}
	else
	printf("FALSE");
}
