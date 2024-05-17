#include<stdio.h>
int main(){
	int k , n ,a ;
	scanf("%d",&n);
	for(k=0 ; k<n ; k++){
		a=2*k ;
		if(a>n){
			printf("%d",k);
			break ;
		}
	}
}
