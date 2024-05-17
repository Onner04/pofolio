#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	gets(a) ;
	if(a[strlen(a)-1]=='\n'){
		a[strlen(a)-1]='\0';
	}
	char kitu ;
	int count=0 ; 
	scanf("%s",&kitu) ;
	for(int i=0 ; i<=strlen(a); i++){
		if(a[i]==kitu || a[i]+32==kitu){
			count++ ;
		}
	}
	printf("%d",count);
}
