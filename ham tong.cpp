#include<stdio.h>
int tong(int n){

if (n==1) return 1 ;
return tong(n-1)+n;}
int main(){
	int n ;
	scanf("%d",&n);
	printf("tong=%d\n",tong(n));
	return 0;
}
