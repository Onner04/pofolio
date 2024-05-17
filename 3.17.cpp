#include<stdio.h>
#include<math.h>
int sochinhphuong(int n ){
	return sqrt((n))==(int) sqrt((n));
}
int main (){
	int n , soluong=0 ;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(sochinhphuong(i)){
			soluong++;
		}
		
	}
	printf("%d",soluong);
	
}

