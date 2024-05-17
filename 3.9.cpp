#include<stdio.h>
int sodaonguoc(long n ){
	long m ;
	int s=0 ;
	while(n>0){
		m=n%10;
		s=s*10+m ;
		n=n/10 ;
	}
	return s ;
}
int main (){
	long n ;
	scanf ("%ld",&n);
	printf ("%ld",sodaonguoc(n)+n);
}
