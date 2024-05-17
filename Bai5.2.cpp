#include <stdio.h>
int main (){
	int n,m;
	scanf ("%d%d",&n,&m);
	int mang[n][m];
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf ("%d",&mang[i][j]);
		}
	}
	int D=0,C=0;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			D+=mang[i][j];
		}
		printf ("%d ",D);
		D=0;
	}
	printf ("\n");
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			C+=mang[j][i];
		}
		printf ("%d ",C);
		C=0;
	}
	return 0;
		
}
