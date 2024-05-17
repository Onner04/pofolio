#include<stdio.h>
int main (){
	int i,n,s ;
	int min ;
	do{
		scanf("%d",&n);
	}while(n<0);
	s=n ;
	if (n==0){
		min=n ;
	}
	do{
		i=n%10;
		if (i<min){
			min=i;
		}
	}while(n/=10);
	printf("%d",min);
}
