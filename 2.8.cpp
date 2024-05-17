 #include <stdio.h>
#include <math.h>
bool nguyen(int a,int b, int c){
	float d,x1,x2;
	d=b*b-4*a*c;
	if (d<0) return false;
	else{
		d=sqrt(d);
		x1=(d-b)/(2*a);
		x2=(-d-b)/(2*a);
		return ((x1==(int)x1)&&(x2==(int)x2));
	}
}
int main(){
	int n,a,b,c,count=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		if (nguyen(a,b,c)) count++;
	}
	printf("%d",count);
	return 0;
	
}
