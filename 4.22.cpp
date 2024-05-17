#include<stdio.h>
int main(){
	int n , a[1000];
	int  max  ;
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++){
		printf("",i);
		scanf("%d",&a[i]);
	}
	for(int i=1 ; i<=n ; i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("%d ",max);
	for(int i=1 ; i<=n ; i++){
		if(max==a[i]){
			printf("%d ",i);
		}
	}
}
