#include <stdio.h>

int main(){
	int n;
	int a[1010]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int num;
		scanf("%d",&num);
		a[num]++;
	}
	int c=0;
	for(int i=0;i<=1000;i++){
		if(a[i]>0) c++;
	}
	printf("%d\n",c);
	for(int i=0;i<=1000;i++){
		if(a[i]!=0){
		printf("%d %d\n",i,a[i]);
	}
}
}
