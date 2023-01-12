#include<stdio.h>

int main()
{
    int a[100];
    int n,p;
    printf("Enter the size");
    scanf("%d",&n);
    printf("\nEnter the elements");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the pos you want to delete");
    scanf("%d",&p);
    p=p-1;
    if(p<n){
    for(int i =p;i<n-1;i++)
    a[i]=a[i+1];
    a[n-1]=0;
    }
    for(int j=0;j<n-1;j++)
    printf("%d ",a[j]);
    
    return 0;
}