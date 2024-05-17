#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int mang[n][n],hang=0,cot=0;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			scanf ("%d",&mang[i][j]);
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if ((i+1)%2!=0){
				hang+=mang[i][j];
				cot+=mang[j][i];
			}
		}
	}
	printf ("%d",hang+cot);
}
