#include<stdio.h>
int main(){
	int a[10000];
	int n ; 
	int tong=0 ,
	 soluong=0 ;
	scanf("%d",&n);
	for(int i=1 ; i<=n ;i++){
		printf("",i);
		scanf("%d",&a[i]);
	}
	for(int i=1 ; i<=n ;i++){
		tong+=a[i] ;
		soluong++ ;
	}
	printf("%.2f",(float)tong/soluong);
}
