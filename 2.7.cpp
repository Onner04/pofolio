#include <stdio.h>
 
long gt(int n){
		long gt=1;
		for(int i=1;i<=n;i++)
		gt=gt*i;
		return gt;
	}
long th(int a,int b){
	long th;
	th=gt(b)/(gt(a)*gt(b-a));
	return th;
	}

	

int main(){
	int m,n,p,q;
	scanf("%d %d %d %d",&m,&n,&p,&q);
	if (m<=n && p<=q){
	printf("%d",th(m,n)-th(p,q));
	}
	else printf("sai so");
	
	
}
