#include<stdio.h>
int trungbinh(int a[], int n ){
	int tong=0 , soluong=0 ;
	for(int i =1; i<=n ; i++){
		tong+=a[i] ; 
		soluong++ ;
	}
	float tb=(float)tong/soluong ;
	return tb ;
}

int main (){
	int a[10000];
	int n  , count=0 ;
	
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++){
		printf("",i);
		scanf("%d",&a[i]);
	}
	for(int i=1 ; i<=n ; i++){
		if(a[i]>trungbinh(a,n)){
				printf("%d",i);
			count++ ;
		
		}
	}
		if(count==0) printf("NOT FOUND");

}
