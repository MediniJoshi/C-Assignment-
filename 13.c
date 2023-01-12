#include<stdio.h>

int main()
{ 
int b,z=0;
   int n;
  printf("enter the size of array");
scanf("%d",&n);
int a[n];
printf("\nEnter the distinct elements");
for(int i= 0;i<n;i++){
scanf("%d",&a[i]);
}
printf("\nEnter the element u want to search");
scanf("%d",&b);
for(int j =0;j<n;j++){
if(a[j]==b){
printf("\nElement found at position %d",j+1);
z++;
}
}
if(z==0)
printf("\nelement not found in array ");
    return 0;
}