#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	gets(a) ;
	if(a[strlen(a)-1]=='\n'){
		a[strlen(a)-1]='\0';
	}
	char b[100] ;
	int count=0 ; 
	gets(b) ;
	for(int i=0 ; i<=strlen(a); i++){
		if(a[i]==strlen(b) || a[i]+32==strlen(b)){
			count++ ;
		}
	}
	printf("%d",count);
}
