#include<stdio.h>
int main(){
	int n , a[10000];
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++){
		printf("",i);
		scanf("%d",&a[i]);
	}
	int max=0 , max2=0 ;
	for(int i=1 ; i<=n ; i++){
		if(max<a[i]){
			max=a[i] ;
			max2=max ;
		}
		else if(max2<a[i]&&a[i]!=max){
			max2=a[i];
		}
	}
	printf("%d ",max2);
	for(int i=1 ; i<=n ; i++){
		if(max2==a[i]){
			printf("%d ",i);
		}
	}
}
