#include<stdio.h>
int main(){
	int n ;
	scanf("%d",&n) ;
	for(int i=1 ; i<=n ; i++){
		int a ;
		a=2*i ;
		if(a>n){
			printf("%d",i) ;
			break ;
		}
	}
}
