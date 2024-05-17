#include <stdio.h>
#include <math.h>

int main(){
	long long n,du;
	int s=0;
	scanf("%lld",&n);
	while(n>0){
		du=n%10;
		n/=10;
		if(du>s) s=du;
	}
	printf("%lld",s);
		
	
}
