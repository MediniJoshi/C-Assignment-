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
     
   int b[m][n];
     printf("\n");
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    b[i][j]=a[j][i];
    }
    }
    
    
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    printf("%d ",b[i][j]);
    }
    printf("\n");
    }
    return 0;
    }        
     
    

    
    
    



    
 