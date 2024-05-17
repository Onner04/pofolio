#include <stdio.h>
#include <math.h>
	int kiemtra( float a, float b, float c){
		return (a+b>c) && (a+c>b) && (b+c>a);
	}
	float dientich( float a, float b, float c){
		float p=(a+b+c)/2;
		return sqrt(p*(p-a)*(p-b)*(p-c));
	}

int main(){
	float a,b,c, area, chuvi;
	scanf("%f%f%f", &a,&b,&c);
	if (chuvi= a + b + c) ;
	if (kiemtra(a,b,c)){
		area = dientich(a,b,c);
		printf("%.2f %.2f", chuvi, area);
	}
	else printf ("No");

return 0;	
}


