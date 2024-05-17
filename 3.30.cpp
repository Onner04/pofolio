#include<stdio.h>
int main(){
	int a[1000] , count=0,  min , max ;
	for(int i=1 ;; i++){
		scanf("%d",&a[i]) ;
		count++ ;
		if(a[i]==0)
		break ;
	}
	min=max=a[0] ;
	for(int i=1 ; i<=count-1 ; i++){
		if(a[i]>max) max=a[i] ;
		if(a[i]<min) min=a[i] ;
	}
	printf("%d %d %d", max , min , count-1) ;
}
