#include<stdio.h>
void phantich(int n){
 
    long a[100000]; 
 
    long c=0;
 
    while(n>1){
 
    for(long i=2;i<=n;i++){
 
        while(n%i==0){ 
 
            n=n/i;
 
            a[c]=i;
 
            c++;   
 
        }
    }
}
}
int main (){
	int n ;
	scanf("%d",&n);
	phantich(n) ;
	return 0 ;
}
