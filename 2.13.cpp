#include<stdio.h>
int gt(int n ){
	if (n==1)	return 1;
	return n*gt(n-1);
}
int  main (){
	int n , k ;
	scanf("%d %d",&n ,&k);
	int th=(gt(n))/(gt(k)*gt(n-k));
	printf("%d",th);
	return 0 ;
}
