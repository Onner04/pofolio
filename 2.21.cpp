#include<stdio.h>
int main (){
	int n , a[1000];
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++){
		printf("",i);
		scanf("%d",&a[i]);
	}
	int tong=0 , soluong=0 ;
	for(int i=1 ; i<=n ; i++){
		if(i%2!=0){
			tong+=a[i];
			soluong++ ;
		}
	}
	printf("%.2f",(float)tong/soluong);
}
