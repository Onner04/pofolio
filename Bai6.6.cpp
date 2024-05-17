#include <stdio.h>
#include <string.h>
void chuan_hoa(char*a){
	int len=strlen(a);
	while(a[0]==' '){
		for (int i=0;i<len;i++){
			a[i]=a[i+1];
		}
		len--;
	}
	while(a[len-1]==' '){
		a[len-1]='\0';
		len--;
	}
	for (int i=0;i<len-1;i++){
		if (a[i]==' '&&a[i+1]==' '){
			for (int j=i;j<len;j++){
				a[j]=a[j+1];
			}
			len--;
			i--;
		}
	}
}
int main (){
	char a[1000];
	fgets(a,1000,stdin);
	if (a[strlen(a)-1]=='\n'){
		a[strlen(a)-1]='\0';
	}
	chuan_hoa(a);
	if (a[0]>=97&&a[0]<=122){
		a[0]-=32;
	}
	for (int i=1;i<strlen(a)-1;i++){
		if (a[i]>=65&&a[i]<=90){
			a[i]+=32;
		}
	}
	for (int i=1;i<strlen(a)-1;i++){
		if (a[i]=='.'||a[i]=='!'||a[i]=='?'&&a[i+1]==' '&&a[i+2]>=97&&a[i+2]<=122){
			a[i+2]-=32;
		}
	}
	printf ("%s",a);    
}
