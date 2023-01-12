#include<stdio.h>

int main()
{
    int ele,n,i,j;
    printf("Enter the size");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements");
    for(i =0; i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element u want to delete");
    scanf("%d",&ele);
    int f=0;
    for( i=0;i<n;i++){ 
    if(a[i]==ele){
    f=1;
    for(j=i;j<=n-2;j++)
    a[j]=a[j+1];
    n=n-1;
   break;
    }
    }
    if(f==0)
    printf("cannot delete");
    printf("final array");
    for(i =0; i<n;i++)
    printf("%d ",a[i]);
    
    
    
    return 0;
}