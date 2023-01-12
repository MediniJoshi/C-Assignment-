#include<stdio.h>

int main()
{
int m,n,i,j;
printf("Enter Row & Column size");
scanf("%d %d",&m,&n);
int A[m][n];
int B[m][n];
int C[m][n];
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&A[i][j]);
}
}
printf("\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&B[i][j]);
}
}

for(i=0;i<m;i++){
for(j=0;j<n;j++){
C[i][j]=A[i][j]+B[i][j];

printf("%d ",C[i][j]);
}
 printf("\n");
}

    return 0;
}