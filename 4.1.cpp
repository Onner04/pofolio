#include<stdio.h>
int main(){
	int a[10000];
	int n ;
	scanf("%d",&n);
	for(int i=0 ;i<n ; i++){
		printf("",i);
		scanf("%d",&a[i]);
	}
	int somax=a[0] , somin=a[0] ;
	for(int i=1; i<n ; i++){
		if(a[i]>somax)
		somax=a[i];
		if(a[i]<somin)
		somin=a[i];
	}
	printf("%d %d",somax,somin);
}

