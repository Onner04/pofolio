#include<stdio.h>
#include<math.h>
int songto(int n ){
	if(n<2){
		return 0 ;
	}
	for(int i=2 ; i<=sqrt(n); i++){
		if(n%i==0)
		return 0 ;
	}
	return 1 ;
}
int main(){
	int a[10000];
	int n ;
	int tong=0 , soluong=0 ;
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++){
		printf("",i);
		scanf("%d",&a[i]);
	}
	for(int i=1 ; i<=n ; i++){
		if(songto(a[i])){
			tong=tong+a[i];
			soluong++ ;
		}
	}
	printf("%.2f",(float)tong/soluong);
}
