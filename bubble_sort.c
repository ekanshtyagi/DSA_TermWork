#include<stdio.h>

void b_sort(int arr[],int n)
{
    int i,j,flag;
    int temp,c=0,s=0;
    
    for(i=0;i<n;i++)
    {
        c++;
        for(j=0;j<n-1-i;j++)
        {
            s++;
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
        for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("\nNo of comparisions = %d ",c+s);
}

int main()
{
    int n,i,j;
    
    printf("Enter the size of the array = ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter an unsorted array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Sorted array is:\n");
    b_sort(arr,n);
}
