#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int count=0;
    for(int i =0;i<n;i++){
        if(isPrime(arr[i])){
            sum+=arr[i];
            count++;
        }
    }
    if (count==0){
        printf("NOT FOUND");
    }else{
        float avg=(float)sum/count;
        printf("%.2f",avg);
    }
    return 0;
}
