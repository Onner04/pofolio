#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float d;
	d=(b*b)-4*a*c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==0){
		if(b==0 and c!=0) printf("VN");
		else if(b==0 and c==0) printf("VSN");
		else printf("%.2f", (float)-c/b);
	}
	else {
		if(d>0) printf("%.2f %.2f", ((-b)+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
		else if(d<0) printf("VN");
		else printf("%.2f",(float)-b/2*a);
	}
}
