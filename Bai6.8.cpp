#include <stdio.h>
#include <string.h>
int test(char*a,char*b){
	int count=0;
    int len_a=strlen(a);
	int len_b=strlen(b);
	for (int i=0;i<=len_a-len_b;i++){
		int j;
		for (j=0;j<len_b;j++){
			if (a[i+j]!=b[j]){
				break;
			}
		}
		if (j==len_b){
			count++;
		}
	}
	return count;	
}
int main (){
	char a[1000];
	fgets(a,1000,stdin);
	if (a[strlen(a)-1]=='\n'){
		a[strlen(a)-1]='\0';
	}
	char b[1000];
	fgets(b,1000,stdin);
	if (b[strlen(b)-1]=='\n'){
		b[strlen(b)-1]='\0';
	}
	int dem=test(a,b);
	printf ("%d",dem);
	return 0;
}
