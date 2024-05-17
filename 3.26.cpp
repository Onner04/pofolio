#include<stdio.h>
int main (){
	int n , s=0 ;
	scanf("%d",&n);
	while(n!=0){
		s=s+1;
		n/=10;
	}
	printf("%d",s);
}
