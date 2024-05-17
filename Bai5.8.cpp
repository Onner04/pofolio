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
	int Tong=0,test1=0,test2=0,count=0;
	for (int i=0;i<n;i++){
	     Tong+=mang[i][i];
	}
	for (int i=0;i<n;i++){
	    for (int j=0;j<n;j++){
	    	test1+=mang[i][j];
		}
		if (test1!=Tong){
	    		count++;
			}
			test1=0;
	}
	for (int i=0;i<n;i++){
	    for (int j=0;j<n;j++){
	    	test2+=mang[j][i];
		}
			if (test2!=Tong){
	    		count++;
			}
			test2=0;
	}
	if(count==0){
		printf ("TRUE");
	}
	else{
		printf ("FALSE");
	}
	return 0;
}
