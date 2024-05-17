#include<stdio.h>
#include<math.h>

bool kiemtra(int n ){
	if (n<2){
		return false ;
	}
	else if (n>2){
		if (n%2==0){
			return false ;
		}
		for (int i=3; i<=sqrt(n);i+=2){
			if(n%i==0)
			return false ;
		}
	}
	return true ;
}


int main (){
	int n ;
	scanf("%d",&n);
	int  tong=0 , soluong=0 ;
	for(int i=2 ; i<=n ; i++){
	
	if(kiemtra(n)){
		tong=tong+i ;
		soluong++ ;
	}
}
	printf("%.3f", (float)tong/soluong);
   
	
	
}
