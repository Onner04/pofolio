#include <stdio.h>
#include <string.h>
void chuan_hoa(char*a){
	int len=strlen(a);
	while (a[0]==' '){
		for (int i=0;i<len;i++){
			a[i]=a[i+1];
		}
		len--;
	}
	while (a[len-1]==' '){
	    a[strlen(a)-1]='\0';
	    len--;
	}
	for (int i=0;i<len-1;i++){
		if (a[i]==' '&& a[i+1]==' '){
			for (int j=i;j<len;j++){
				a[j]=a[j+1];
			}
			len--;
			i--;
		}
	}
}
int main (){
	char a[255];
	fgets(a,255,stdin);
	if (a[strlen(a)-1]=='\n'){
		a[strlen(a)-1]='\0';
    }
    chuan_hoa(a);
    int count=0;
    for (int i=0;i<strlen(a);i++){
    	if (a[i]==' '&& a[i+1]!=' '){
    		count++;
		}
	}
	printf ("%d",count+1);
}
