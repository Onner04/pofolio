#include <stdio.h>


int main(){
	char chi[12][10]={"Ty","Suu","Dan","Mao","Thin","Ty.","Ngo","Mui","Than","Dau","Tuat","Hoi"};
	char can[10][10]={"Canh","Tan","Nham","Quy","Giap","At","Binh","Dinh","Mau","Ky"};
	int nam;
	scanf("%d",&nam);
	printf("%s %s",can[nam%10],chi[(nam-4)%12]);
}
