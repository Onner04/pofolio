#include <stdio.h>
#include <string.h>
int main (){
	char a[50];
    fgets(a,50,stdin);
    a[strlen(a)-1]='\0';
    printf ("I love %s!",a);
}

