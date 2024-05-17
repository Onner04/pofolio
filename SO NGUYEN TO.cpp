#include<stdio.h>
#include<math.h>
int songto(int n ){
	if(n<0){
		return 0 ;
	}
	if(n>2){
		if(n%2==0){
			return 0 ;
		}
		for(int i=3 ; i<sqrt(n); i++){
			if(n%i==0){
				return 0 ;
			}
		}
	}
	return 1 ;
}
int main (){
	int n ; 
	scanf("%d",&n);
	if(songto(n)==1){
		printf("TRUE");
	}
	else{
		printf("FALSE");
	}
}
