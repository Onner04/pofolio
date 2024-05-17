#include <stdio.h>
int main(){
	int a[100],count=0,min,max;
	for(int i=0;;i++){
		scanf("%d",&a[i]);
	
		count++;
		if(a[i]==0)	break;
	}
	min=max=a[0];
	for(int i=0;i<count-1;i++){
		if(min>a[i]) min=a[i];
		if(max<a[i]) max=a[i];
	}
	printf("%d %d %d",max,min,count-1);
	return 0;
}

