#include<stdio.h>
int main(){
	int n ; 
	int a[1000],b[1000];
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++){
		printf("",i);
		scanf("%d \n %d ",&a[i],&b[i]);
	}
	int s=0 , k=0 ;
	for(int i=1 ; i<=n ; i++){
		s+=a[i] ;
		k+=b[i] ;
		
	}
	if(s==k){
		printf("TRUE");
	}
	else
	printf("FALSE");
}
