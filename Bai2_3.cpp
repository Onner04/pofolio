#include<stdio.h>
#include<math.h>
int main(){
	long a,b,c;
	scanf("%ld%ld%ld",&a,&b,&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("VSN");
			}
			else{	printf("VN");
			}
		}
		else{
		printf("x=%.2f",(float)(-c)/b);
		}
	}
	else{
	     long delta;
	     float x1,x2;
	     delta=b*b-4*a*c;
	     if(delta<0){
		    printf("VN");
	    }
	     else if(delta==0){
	     printf("x=%.2f",(float)(-b)/2*a);
	     }
 	      else{
 	      	   x1=(float)(-b+sqrt(delta))/(2*a);
 	      	   x2=(float)(-b-sqrt(delta))/(2*a);
 	      	   if(x1>x2){
 	      	   	         printf("%.2f %.2f",x2,x1);
				  }
 	      	       else{
 	      	       	printf("%.2f %.2f",x1,x2);
					  }
	 }
	}
	return 0;
}
