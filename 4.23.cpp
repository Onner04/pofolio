#include<stdio.h>
int main(){
	int n , a[1000];
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++){
		printf("",i);
		scanf("%d",&a[i]);
	}
	int min ;
	for(int i=1 ; i<=n ; i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	printf("%d ",min);
	int s=0;
	for(int i=1 ; i<=n ; i++){
		if(min==a[i]){
		s++ ;
	}
}
	
     printf("%d",s);
	
}
