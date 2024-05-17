#include <stdio.h>


int main(){
	int n,m,ucln,bcnn;
	scanf("%d %d",&n,&m);
	int min;
	if(n>m) min=m;
	else min=n;
	for(int i=min;i>=1;i--){
		if(n%i==0 && m%i==0){
		ucln=i;
		break;
		}
	}
	for(int i=1;;i++){
		if(i%n==0 && i%m==0){
			bcnn=i;
			break;
		}
	}
	printf("%d %d",ucln,bcnn);
}
