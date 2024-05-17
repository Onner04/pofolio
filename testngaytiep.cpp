#include<stdio.h>
int songay( int m , int y)
{
	switch(m)
	{
		case 1 : case 3 : case 5: case 7: case 8 : case 10: case 12 :{
			return 31 ;
			break;
		}
		case 2 :{
			return 28 ;
			break;
		}
		case 4: case 6 : case 9 : case 11:{
			return 30 ; 
			break;
		}
	}
	
	
}
void ngaytieptheo(int d , int m , int y ){
	int ny=y ; int nm=m ; int nd=d ;
	if(y>0 && m>0 && m<13 &&d>0 &&d<=songay(m,y))
	{
		nd=d+1 ;
	}
	if(m!=12 && d==songay(m,y) ){
		nd=1;
		nm=m+1;
	}
	if(m==12&&d==songay(m,y)){
		nd=1;
		nm=1;
		ny=y+1;
	}
	printf("ngay tiep theo:%d %d %d",nd,nm ,ny);
}
int main(){
int y ; int m ; int d;
do {

	scanf("%d",&y);
	
	scanf("%d",&d);

	scanf("%d",&m);
	
 }while(y < 0 || m < 1 || m >12 || d < 0 || d > 31);
ngaytieptheo(d,m,y);
}

