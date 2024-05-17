#include <stdio.h>
#include <math.h>
bool ngto(int n){
	int i=2;
	while ((i<=sqrt(n))&&(n%i!=0)) i++;
	return (i>sqrt(n));
}
int main(){
	int n,tong=0,soluong=0;
	scanf("%d",&n);
	for (int i=2;i<=n;i++){
	
		if (ngto(i)){
			tong+=i;soluong++;
		}
	}
	if(soluong==0) printf("0");
	else printf("%.3f",(float)tong/soluong);
}
