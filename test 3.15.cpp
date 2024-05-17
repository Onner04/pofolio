#include<stdio.h>
int main(){
	int n ; 
	int a[1000];
	scanf("%d",&n);
	int count, min=a[0] , max=a[0] ; 
	for(int i=0 ; i<n ; i++){
		if(min>a[i]) min=a[i];
		if(max<a[i]) max=a[i];
		count++ ;
	}
	printf("%d %d %d ",min , max  , count);
	
}
