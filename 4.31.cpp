#include<stdio.h>
#include<math.h>
int ngto(int n ){
	if(n<2){
		return 0 ;
	}
	if(n>2){
		if(n%2==0){
			return 0 ;
		}
		for(int i=3 ; i<=sqrt(n) ;i++){
			if(n%i==0){
				return 0 ;
			}
		}
	}
	return 1 ;
}
int main(){
	int a[1000];
	int n ; 
	scanf("%d",&n);
	for(int i=1 ;i<=n ; i++){
		printf("",i);
		scanf("%d",&a[i]);
	}
	int s=0 ;
	for(int i=1 ; i<=n ; i++){
		if(ngto(a[i])&&a[i]<100){
			s++ ;
		}
	}
	printf("%d",s);
}
