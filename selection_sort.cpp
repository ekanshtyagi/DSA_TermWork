#include<iostream>
using namespace std;

void selsort(int a[],int n)
{
int c=0;
    for(int i=0;i<n-1;i++)
    {
    int m=i;
   for(int j=i+1;j<n;j++)
    {
       if(a[m]>a[j])
       m=j;
    }
    if(a[i]!=a[m])
    {
        int temp=a[i];
        a[i]=a[m];
        a[m]=temp;c++;
    }
    }
    cout<<"no of shifts"<<c<<endl;
}

int main()
{
int n;
cin>>n;
int a[100];
for(int i=0;i<n;i++)
    cin>>a[i];
selsort(a,n);
for(int i=0;i<n;i++)
cout<<a[i]<<endl;;
}
