#include<stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
    while(l<=r)
    {
        int m = (l+r)/2;
        
        if(arr[m]==x)
        {
            return m;
        }
        
        else if(arr[m]<x)
        {
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    return -1;
}

int main()
{
    int left,right,key;
    int i,n;
    int arr[n];
    int result;
    
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    
    printf("Enter the elements in sorted order: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    left = 0;
    right = n-1;
    
    printf("Enter the key to be searched= ");
    scanf("%d",&key);
    
    result = binarySearch(arr, left, right, key);
    
    if(result==-1)
    {
        printf("Element is not present in the array");
    }
    else
    {
        printf("Element is present at index %d",result);
    }
}

