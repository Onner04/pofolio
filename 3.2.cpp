#include<stdio.h>
int giaithua(int n){
	if  (n<0){
		printf ("NOT FOUND");
	}
	else if (n==1){
		return 1 ;
	}
	else if (n>1){
		return n*giaithua(n-1);
	}
}

int main ()
{
int n  ;
scanf ("%d",&n);
printf ("%d",giaithua(n));
return 0 ;
}



