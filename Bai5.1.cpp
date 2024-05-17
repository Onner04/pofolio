#include <stdio.h>
int main (){
	int m,n;
	scanf ("%d%d",&m,&n);
	int mang[m][n];
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			scanf ("%d",&mang[i][j]);
		}
	}
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			printf("%d ",mang[i][j]);
		}
		printf ("\n");
	}
	return 0;
	
}
