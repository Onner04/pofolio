#include<stdio.h>
int main(){
	int n , m ;
	int min=9999 ;
	scanf("%d",&n);
	while(n>0){
		m=n%10 ;
		n/=10 ;
		if(m <min){
			min=m ;
		}
	}
	printf("%d",min);
}
