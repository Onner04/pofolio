#include<stdio.h>
int main(){
	int n,s=0,i=1;
	scanf("%d",&n);
	while(n>0){
		s+=(n%2)*i;
		n/=2;
		i*=10;
	}
	printf("%d",s);
	return 0;
}
