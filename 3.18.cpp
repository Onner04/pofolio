#include<stdio.h>
#include<math.h>
int songto(int n ){
	if(n<2){
		return false ;
	}
	if(n>2){
		if(n%2==0){
			return false ;
		}
		for(int i=3;i<=sqrt(n);i++){
			if(n%i==0){
				return false ;
			}
		}
	}
	return true ;
}
int main (){
	int n , soluong=0 ;
	scanf("%d",&n);
	for(int i=2;i<n;i++){
	
	if(songto(i)){
		soluong++;
	}
}
	printf("%d",soluong);
}
