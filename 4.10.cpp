#include<stdio.h>
#include<math.h>
int chinhphuong(int n ){
	return sqrt(float(n))==(int)sqrt(float(n));
}
int main(){
	int a[10000];
	int n ; 
	scanf("%d",&n);
	for(int i=1 ;i<=n ; i++){
		printf("",i);
		scanf("%d",&a[i]);
	}
	for(int i=1 ; i<=n ; i++){
		if(chinhphuong(a[i])){
		 printf("%d ",a[i]);
		 break ;
		}
		else
		printf("not") ;
		break ;
	}
}
