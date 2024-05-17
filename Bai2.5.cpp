#include <stdio.h>
int main (){
	int m, y;
	scanf("%d", &m);
	if (m>=1 && m <=12){
		switch (m) {
			case 2:
			  printf ("Nhap nam: ");
			  scanf ("%d", &y);
			  if ((y%4==0 && y%100!=0) || (y%400==0)){
				printf("29");}
			  else {printf ("28");} 
			break;
			case 4:
			case 6:
			case 9:
			case 11:
			   printf ("30");
			   break;
			default:
			   printf ("31");
			break;
		}
		
	} else { printf ("NOT FOUND");
	}
	return 0;
	
}
