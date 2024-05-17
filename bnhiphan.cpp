#include<stdio.h>
#include<conio.h>

int main(){
	int a[1000];
	int n ;
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++){
		printf("",i);
		scanf("%d",&a[i]);
	} 
    for(int i=0;n>0;i++)  
{  
    a[i]=n%2;  
     n=n/2;  
}  
     for(int i=i-1;i>=0;i--)  
{  
      printf("%d",a[i]);  
}
}
