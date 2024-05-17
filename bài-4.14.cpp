#include <stdio.h>
int countDistinct(int arr[], int n, int result[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int seen = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                seen = 1;
                break;
            }
        }
        if (seen == 0)
        {
            result[count] = arr[i];
            count++;
        }
    }
    return count;
}
int countFrequency(int arr[], int n, int x)
{
    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            freq++;
        }
    }
    return freq;
}
int main()
{
    int n; 
    scanf("%d", &n);
    
    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result[n];
    int m = countDistinct(arr, n, result);
    printf(" %d\n", m);
    for (int i = 0; i < n; i++)
    {
        int printed = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                printed = 1;
                break;
            }
        }
        if (printed == 0)
        {
            int freq = countFrequency(arr, n, arr[i]);
            printf("%d %d\n", arr[i], freq);
        }
    }
    return 0;
}

