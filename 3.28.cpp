#include<stdio.h>
int main (){
	int n , s=1 ;
	scanf("%d",&n);
	for(int i=1 ;i<=n ;i++ ){
		if(i%2!=0){
			s=s*i ;
		}
	}
	printf("%d",s);
}
