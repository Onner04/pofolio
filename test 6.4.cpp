#include<stdio.h>
#include<string.h>
int chuanhoa(char*a){
	int f=strlen(a) ;
	while(a[0]==' '){
		for(int i=0 ; i<f ; i++){
			a[i]=a[i+1] ;
		}
		f-- ;
	}
	while(a[f-1]==' '){
		a[f-1]='\0' ;
		f-- ;
	}
	for(int i=0 ; i<f-1 ; i++){
		if(a[i]==' ' && a[i+1]==' '){
			for(int j=i ; j<f ; j++){
				a[j]=a[j+1] ;
			}
			f-- ;
			i-- ;
		}
	}
}
int main(){
	char a[100] ;
	gets(a) ;
	if(a[strlen(a)-1]=='\n'){
		a[strlen(a)-1]='\0' ;
	}
	chuanhoa(a) ;
	char ten[30] , gan[30] ;
	int dem=strlen(a)-1 , z=0 ;
	while(a[dem]!=' '){
		gan[z]=a[dem] ;
		dem-- ;
		z++ ;
	}
	int dem2=strlen(gan)-1 , x=0 ;
	while(dem2>=0){
		ten[x]=gan[dem2] ;
		dem2-- ;
		x++ ;
	}
	if(ten[strlen(ten)]!='\0'){
		ten[strlen(ten)]='\0' ;
	}
	printf("%s",ten) ;
}
