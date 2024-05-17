#include<stdio.h>
void khacnhau(int a[], int n){
	int b[n];
	int x=1 ;
	b[0]=a[0];
	for(int i=1 ; i<=n ; i++){
		int s=0 ;
		for(int j=0; j<x ; j++){
			if(a[i]==b[j])
			s++ ;
		}
		if(s==0){
			b[x]=a[i];
			x++ ;
			
		}
	}
     printf("%d",x);
}
int main(){
	int n  ;
	int a[1000];
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++){
		printf("",i);
		scanf("%d",&a[i]);
	}
		khacnhau(a,n);		
	
}
