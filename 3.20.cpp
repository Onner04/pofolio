#include <stdio.h>
int main(){
	int a,s=0;
	scanf("%d",&a);
	a*=a;
	while(a>0){
		s+=a%10;
		a/=10;
	}
	printf("%d",s);
}
