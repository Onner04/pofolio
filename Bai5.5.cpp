#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int mang[n][n],count=0;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
		scanf ("%d",&mang[i][j]);	
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (mang[i][j]!=mang[j][i]){
				count++;
			}
		}
	}
	if (count==0){
		printf ("TRUE");
	}
	else{
		printf ("FALSE");
	}
	return 0;
}
