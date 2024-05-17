#include<stdio.h>
#include <stdio.h>
int xoa(int a[], int n, int b[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int seen = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                seen = 1;
                break;
            }
        }
        if (seen == 0)
        {
            b[count] = a[i];
            count++;
        }
    }
    return count;
}
int main() {
    int n, arr[1010] = {0},a[1000],b[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        a[i] = num;
        arr[num]++;
    }
    int m = xoa(a,n,b);
    for(int i=0;i<m;i++){
    	printf("%d %d\n",b[i],arr[b[i]]);
	}
}
