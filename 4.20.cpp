#include<stdio.h>
int main(){
	int n ,s=0; 
	int a[1000];
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++){
		printf("", i);
		scanf("%d",&a[i]);
	}
	for(int i=1 ; i<=n ; i++){
		if(a[i]>0)
		s+=a[i];
	}
	printf("%d",s);
}
