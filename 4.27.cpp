#include<stdio.h>
int main(){
	int n ; 
	int s=0 ;
	int a[1000];
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++){
		printf("",i);
		scanf("%d",&a[i]);
	}
	for(int i=1 ; i<=n ; i++){
		if(a[i]%2==0){
			s++ ;
		}
	}
	printf("%d",s);
}
