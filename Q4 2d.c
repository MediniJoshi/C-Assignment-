#include<stdio.h>

int main()
{
   
     int m,n; 
    int i ,j;
    printf("Enter the size of rows and column");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements of array");
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    scanf("%d",&a[i][j]);
    }
  
     }
    printf("\n");
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    if(i==0)
    printf("%d ",a[i][j]);
    else if(i==m-1)
    printf("%d ",a[i][j]);
    else if(j==0)
    printf("%d ",a[i][j]);
    else if(j==n-1)
    printf("%d ",a[i][j]);
    else
    printf("  ");
    }
    printf("\n");
    }
    
    
   
     
    

    
    
    



    
    return 0;
}