#include <stdio.h>
#include <math.h>
int check(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n,c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		if(check(i)==1) {
		printf("%d ",i);
		c++;
		}
	}
	if(c==0) printf("NOT FOUND");
	
	
	
	
}
