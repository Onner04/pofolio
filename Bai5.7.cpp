#include <stdio.h>
int test (int n){
	if (n<2){
		return 0;
	}
	else{
		for (int i=2;i*i<=n;i++){
			if (n%i==0){
				return 0;
			}
	}
	return 1;
}
}
int main () {
	int m,n,count=0;
	scanf ("%d%d",&m,&n);
	int mang[m][n];
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			scanf ("%d",&mang[i][j]);
		}
	}
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
		   if (test(mang[i][j])){
		   	count++;
		   }	
		}
	}
	printf ("%d",count);
	return 0;
}
