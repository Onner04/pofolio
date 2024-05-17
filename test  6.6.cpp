#include<stdio.h>
#include<string.h>
int chuanhoa(char*a){
	int f=strlen(a) ;
	while(a[0]==' '){
		for(int i=1 ;i<=f ; i++){
			a[i]=a[i+1];
		}
		f-- ;
	}
	while(a[f-1]==' '){
		a[f-1]='\0';
		f-- ;
	}
	for(int i=1 ; i<=f-1 ; i++){
		if(a[i]==' ' && a[i+1]==' '){
			for(int j=i ; j<=f ; j++){
				a[j]=a[j+1];
			}
			f-- ;
			i-- ;
		}
	}
}
int main(){
	char a[100];
	gets(a) ;
	if(a[strlen(a)-1]='\n'){
		a[strlen(a)-1]='\0';
	}
	chuanhoa(a) ;
	if(a[0]>=97 && a[0]<=122){
		a[0]-=32 ;
	}
	for(int i=0  ; i<=strlen(a); i++){
		if(a[i]>=65 && a[i]<=90){
			a[i]+=32 ;
		}
	}
	printf("%s",a);
}
