#include <stdio.h>
#include <string.h>
void chuan_hoa(char*a){
	int len=strlen(a);
	//kiem tra dau gach cheo o dau chuoi
	while(a[0]=='/'){
		for (int i=0;i<len;i++){
			a[i]=a[i+1];
		}
		len--;
	}
	//kiem tra dau gach cheo o cuoi chuoi
	while(a[len-1]=='/'){
			a[len-1]='\0';
			len--;		
	}
	//Kien tra dau ganh cheo o ben trong chuoi
	for (int i=0;i<len-1;i++){
		if (a[i]=='/'&& a[i+1]=='/'){
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
	printf ("%s",a);
	return 0;	
}
