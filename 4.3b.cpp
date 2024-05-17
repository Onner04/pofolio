#include<stdio.h>
int hamgiam(int a[], int n) {
	int s=0 ;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<i ; j++){
			if(a[i]>a[j]){
				s=a[j] ;
				a[j]=a[i] ;
				a[i]=s ;
			}
		}	
	}
}
int hamtang(int a[], int n ){
	int x=0 ;
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			if(a[i]<a[j]){
				x=a[i] ;
				a[i]=a[j] ;
				a[j]=x ;
			}
		}
	}
}
int main(){
	int n ; 
	int a[1000] ;
	scanf("%d",&n) ;
	for(int i=1 ; i<=n ; i++){
		printf("",i) ;
		scanf("%d",&a[i]) ;
	}
	
for(int i=1 ; i<=n ; i++){
	if(hamgiam(a,n)){
		printf("%d",a[i]) ;
	}
	}
	printf("\n") ;
for(int i=1 ; i<=n ; i++){
	if(hamtang(a,n)){	
		printf("%d",a[i]) ;
	}
}
}
	
		
