#include<stdio.h>

int main()
{  int y=0;
int pos,in;
   int n;
  printf("enter the size of array");
scanf("%d",&n);
int a[n];
int b[n+1];
printf("\nEnter the elements");
for(int i= 0;i<n;i++){
scanf("%d",&a[i]);
}
printf("\nEnter the element u want to insert and also it's position");
scanf("%d %d",&in,&pos);
for(int j =0;j<n+1;j++){

if(j==pos-1)
b[j]=in;
else{
b[j]=a[y];
y++;
}
}

for(int k =0;k<=n;k++){
printf("%d ",b[k]);
}

    return 0;
}