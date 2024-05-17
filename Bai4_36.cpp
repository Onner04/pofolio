#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int dem =0;
	scanf("%d",&n);
	if(n>0&&n<=10000){
		int a[n];
		int b[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
			for(int i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
			
		
		for(int i=0;i<n;i++){
		    for(int j=i+1;j<n;j++){
		    	int min = a[i];
				if(a[j]<a[i]){
					
					a[i]=a[j];
					a[j]=min;
				}
			}
			for(int j=i+1;j<n;j++){
				int min1 = b[i];
				if(b[j]<b[i]){
					b[i]=b[j];
					b[j]=min1;
				}
			}
		}
	for(int i=0;i<n;i++){
		if(a[i]==b[i]){
			dem+=1;
		}
	}
	if(dem==n){
		printf("YES");
		
	}
	else{
		printf("NO");
	}
	
		
		
		
		
		
		
	}



return 0;
}


