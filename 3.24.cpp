#include<stdio.h>
int main (){
	int n , s=0 , m ;
	scanf("%d",&n);
	while(n!=0){
		m=n%10 ;
		s=s+m ;
		n/=10 ;
	}
	printf("%d",s);
}
