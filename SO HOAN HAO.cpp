#include<stdio.h>
int sohoanhao(int n ){
	int s=0 ;
	for(int i=1 ; i<n/2 ;i++){
		if(n%i==0)
		s=s+i ;
	}
	if(2*s==n){
		return 1 ;
	}
	return 0 ;
}
int main (){
	int n ;
	 scanf("%d",&n);
	 if(sohoanhao(n)){
	 	printf("TRUE");
	 }
	 else 
	 printf("FALSE");
}
