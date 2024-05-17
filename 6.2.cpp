#include<stdio.h>
#include<string.h>
int main(){
	char  a[100];
	gets(a);
	int s=0 ;
	for(int i=1 ; i<=strlen(a);i++){
	if(a[i]==' ')
			s++ ;
	}
	printf("%d",s+1);
}
