#include<stdio.h>
 int gtmax( int a[], int n ){
 	int vitri=0 ;
 	int max=a[0] ;
 	for(int i=0 ; i<n ; i++){
 		if(a[i]>max){
 			max=a[i];
 		    vitri=i ;
		 }
	
	 }
	 	 return vitri ;
 }
 int main(){
 	int n ; 
    int vitri ;
 	int a[10000];
 	scanf("%d",&n);
 	for(int i=1 ; i<=n ; i++){
 		printf("",i);
 		scanf("%d",&a[i]);
	 }
	
	 	vitri=gtmax(a,n);
	    printf("%d",vitri);
	 
	
 }
