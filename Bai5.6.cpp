#include <stdio.h>
int main (){
	int m,n;
	scanf ("%d%d",&m,&n);
	int mang_1[m][n],mang_2[m][n];
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			scanf ("%d",&mang_1[i][j]);
		}
	}
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			scanf ("%d",&mang_2[i][j]);
		}
	}for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			printf ("%d ",mang_1[i][j]+mang_2[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
