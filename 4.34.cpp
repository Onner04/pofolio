
#include <stdio.h>


int main(){
	int a[1000],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(i%2==0) a[i]*=-1;
	}
	int s=0;
	for(int i=0;i<n;i++){
		s+=a[i];
	}
	printf("%d",s);
}
