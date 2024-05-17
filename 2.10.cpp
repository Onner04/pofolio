#include<stdio.h>
int songay(int y , int m){
	switch(m){
		case 1:case 3 :case 5: case 7: case 8 : case 10 : case 12 :{
			return 31 ;
			break;
		}
		 case 4 : case 6 : case 9 : case 11 : {
			return 30 ;
			break;
		}
		case 2 :{
			return 28 ;
			break;
		}
	}
}
void songaytruoc(int d , int m , int y){
	int nd=d ; int nm=m ; int ny=y ;
	if (y>0 && m>0 && d>0 && m<13&& d<= songay(y,m)){
		nd=d-1 ;
		
	}
	if(m!=12 && d==1){
		nm=m-1 ;
	}
	if(m==1 && d==1){
		ny=y-1 ;
	}
	printf("%d %d %d",nd,nm,ny);
}
int main (){
	int m ; int y ; int d ;
	do {
   
    scanf("%d", &d);
  
    scanf("%d", &m);
    
    scanf("%d",&y);
  } while (y < 0 || m < 1 || m >12 || d < 0 || d > 31);
    songaytruoc(d,m,y);
 
return 0 ;
	
}
