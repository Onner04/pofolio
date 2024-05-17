#include <stdio.h>
int main(){
 	int a[10000],n;
	scanf("%d",&n) ;
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	int i=0;
	while ((i<=n/2)&&(a[i]==a[n-i-1])) i++;
	printf((i>n/2)?"TRUE":"FALSE");
}
