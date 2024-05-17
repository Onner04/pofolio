#include <stdio.h>
#include <string.h>
int main(){
	char a[1000];
	fgets(a,1000,stdin);
	if(a[strlen(a)-1]=='\n'){
		a[strlen(a)-1]='\0';
	}
	char kitu;
	scanf ("%c",&kitu);
	int count=0;
	for (int i=0;i<strlen(a);i++){
		if (a[i]==kitu||a[i]+32==kitu){
			count++;
		}
	}
	printf ("%d",count);
}
