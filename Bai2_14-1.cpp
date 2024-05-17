#include <stdio.h>

int main(){
	int n;
	long long tien;
	scanf("%d",&n);
	if(n==1) {
		tien=50;
	}
	else if(1<n && n<=30) {
		tien=(50+(n-1)*40);
	}
	else {
		tien=(50+29*40+(n-30)*30);
	}
	printf("%lld",tien);
}
