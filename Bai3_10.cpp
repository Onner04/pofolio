#include <stdio.h>
#include <math.h>

int main(){
	int a,b,BCNN,UCLN;
	scanf("%d %d",&a,&b);
	int min=a<b?a:b;
	for(int i=min;;i+=min){
		if(i%a==0 && i%b==0) {
		BCNN=i;
		break;
		}
	}
	for(int i=min;;i--){
		if(a%i==0 && b%i==0){
			UCLN=i;
			break;
		}
	}
	printf("%d %d",UCLN,BCNN); 
}
