#include<stdio.h>
int test(int n){

	long a[110];	
	for(int i =3 ; i<=n ;  i++){
		a[0]=0 ;
		a[1]=1 ;
		a[n+1]=a[n]+a[n-1];
	}
	return a[n];
}
int main (){
	int n ; 
	scanf("%d",&n);
	printf("%d",test(n));
}
