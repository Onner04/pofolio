//48 den 57 la cac so tu 0 den 9
//65 den  90 la cac chua cai in hoa tu A den Z
//97 den 122 lad tu a den z
#include <stdio.h>
#include <string.h>
int main (){
	char a[10000];
	fgets(a,10000,stdin);
	if (a[strlen(a)-1]=='\n'){
		a[strlen(a)-1]='\0';
	}
	int count=0;
	for (int i=0;i<=strlen(a);i++){
		if (a[i]>=48 && a[i]<=57){
			count++;
		}
	}
	if (count==strlen(a)){
		printf ("TRUE");
	}
	else {
		printf ("FALSE");
	}
	return 0;
}
