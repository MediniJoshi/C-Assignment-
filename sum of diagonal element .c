#include<stdio.h>

int main()
{
int A[100][100],m,n,i,j,s=0;
printf("Enter Row & Column size");
scanf("%d %d",&m,&n);



if(m!=n)
printf("Not  a square matrix , so diagonal is not possible");
else
{
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&A[i][j]);
if(i==j || i+j==m-1)
s= s+ A[i][j];
}
}
printf("sum=%d",s);


}
    return 0;
}