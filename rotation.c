#include<stdio.h>

int main()
{
   int n,f=0;
   scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++)
    scanf("%d",&a[i]);
    int r;
    scanf("%d",&r);
    for(int j=1;j<=r;j++)
    {
    int t=a[0];
    for(int i =0; i <n-1;i++)
    a[i]=a[i+1];
    a[n-1]=t;
    }
     for(int i = 0;i<n;i++)
    printf("%d",a[i]);
    return 0;
    
}