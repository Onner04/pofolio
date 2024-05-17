#include <stdio.h>
int trungbinh(int a[],int n){
	float tb;
	int s=0,count=0;
	for(int i=0;i<n;i++){
		s+=a[i];
		count++;
	}
	tb=(float)s/count;
	return tb;
}
int main(){
	int a[100000],n,tb,count=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	tb=trungbinh(a,n);
	for(int i=0;i<n;i++){
		if(a[i]>tb) {
		printf("%d ",i+1);
		count++;}
	}
	if(count==0) printf("NOT FOUND");
	
}
