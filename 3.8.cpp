#include<stdio.h>
int main(){
	int i , n , s ;
	int max=0 ;
	do{
		scanf ("%d",&n);
	}
	while(n<0);
	s=n;
	if (n==0)
	max=0;
	do{
		i=n%10;
		if(i>max){
			max=i;
		}
	}while(n/=10);
	printf("%d",max);
	
}
