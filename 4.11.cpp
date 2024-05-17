#include<stdio.h>
int soam(int n,int a[] ){
	for(int i=0 ; i<=n ; i++){
		if(a[i]<0){
		
		return a[i] ;
	}
	}

}
int somax(int n, int a[]){
	int max=1 ;
	for(int i=0 ; i<n ; i++){
		if(a[i]<0&&max<a[i]){
			max=a[i];		
		}
	}
	return max ;
}
int main(){
	int n ,max ; 
	int a[10000];
	scanf("%d",&n);
	for(int i=1; i<=n ; i++){
		printf("",i);
		scanf("%d",&a[i]);
	}
	max=soam(n,a);
	if(max!=0)
	printf("%d",max);
}
