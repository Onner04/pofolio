#include<stdio.h>
int main (){
	long a[51];
	int n ;
	scanf("%d",&n);
	for  (int i=3 ; i<=n ; i++){
		a[1]=a[2]=1;
		a[n]=a[n-1]+a[n-2];
	}
	printf("%ld",a[n]);
}
