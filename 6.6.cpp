#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	fgets(a,255,stdin);
	if(a[strlen(a)-1]=='\n'){
		a[strlen(a)-1]='\0';
	}
	int s=0 ;
	for(int i=0 ; i<=strlen(a); i++){
		if(a[i]>=48 &&a[i]<=57){
			s++ ;
		}
	}
	if(s==strlen(a)){
		printf("TRUE");
	}
	else
     printf("FALSE");
}
