#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int mang[n][n];
	for (int i=0;i<n;i++){
	    for (int j=0;j<n;j++){
	    	scanf ("%d",&mang[i][j]);
		}
	}
	int Tong=0;
//	for (int i=0;i<n;i++){
//	     Tong+=mang[i][i];
//	}
    for (int i=0;i<n;i++){
    	Tong+=mang[i][n-i-1];
	}
	printf ("%d",Tong);
	return 0;
}
