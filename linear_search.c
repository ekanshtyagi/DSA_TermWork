#include<stdio.h>

void check(int a[], int n, int key)
{
    int c,i;
    for(i=0;i<n;i++)
    {
        c++;
        if(key==a[i])
        {
            printf("Key is present");
            printf("\nNo. of comparisions = %d",c);
            return;
        }
    }
            printf("Key is not present");
            printf("\nNo. of comparisions = %d",c);
}

int main()
{
    int i,n,key;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the key: ");
    scanf("%d",&key);
    
    check(a,n,key);
}
