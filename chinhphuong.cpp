#include<stdio.h>
#include<math.h>
bool  kiemtrasochinhphuong(int n){
	return sqrt((n)) ==(int) sqrt((n));
	
}
void lietkechinhphuong(int n ){
	for(int i=2; i<n ;i++){
		if (kiemtrasochinhphuong(i)==true)
		printf("%4d",i);
	}
}
int main(){
	int n ;
	scanf ("%d",&n);
	lietkechinhphuong(n);

}
