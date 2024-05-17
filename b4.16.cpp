#include <stdio.h>
int soam(int a[], int n){
	int max=1;
	for(int i=0;i<n;i++){
		if(a[i]<0) {
			max=a[i];
			break;
			}
	}
	if(max==1) return 0;	
	for(int i=0;i<n;i++){
		if(max<a[i] && a[i]<0) max=a[i];
	}
	return max;
}
int main(){
	int n,a[10000],max;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=soam(a,n);
	if(max==0) printf("NOT FOUND");
	else printf("%d",max);
}
