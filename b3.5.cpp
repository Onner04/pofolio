#include<stdio.h>
int check (int n){
	int s =0 ;
	for (int i=1;i<=n/2;i++){
		if(n%i==0)
			s+=i;
}
		if (s==n)  return 1 ;
		return 0 ;

}
int main (){
	int n ;
	scanf ("%d", &n );
	
	if (check(n))
		printf ("TRUE");
	
	else 
	printf ("FALSE");
	return 0 ;
}
