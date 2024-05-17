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
	int count=0,Tong=0;
	for (int i=0;i<n;i++){
	     count++;
	     Tong+=mang[i][i];
	}
	float TB=(float)Tong/count;
	printf ("%.2f",TB);
	return 0;
}
