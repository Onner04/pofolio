#include<stdio.h>
int main(){
	long long n , m ;
	scanf("%d",&n );
	int s=0 ;
	while(n>0){
		m=n%10 ;
		s=s*10+m ;
		n=n/10;
	}
	printf("%d",s);
}
