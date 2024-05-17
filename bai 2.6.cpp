#include<stdio.h>
int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31} ;
int main()
{
	int a ;
	scanf("%d",&a);
	if(a>0&&a<=12)
	printf("%d\n",day[a]);
	else
	printf("not found");
	return 0 ;
}
