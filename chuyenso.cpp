
#include <stdio.h>
int main(){
	char s[20];
	int x;
	long long n;
	scanf("%s",&s);
	for (int i=0;i<strlen(s);i++){
	    switch (s[i]){
	    	case 'I': x=((s[i+1]='V')||(s[i+1]='X'))?-1:1;break;
	    	case 'X': x=((s[i+1]='L')||(s[i+1]='C'))?-1:1;break;
	    	case 'C': x=((s[i+1]='D')||(s[i+1]='M'))?-1:1;break;
	    	case 'V': X=5;break;
	    	case 'L': X=50;break;
	    	case 'D': X=500;break;
	    	case 'M': X=1000;break;
		}	
	}
}
