#include<stdio.h>

int main()
{ int l,s;
int n;
printf("Enter the size");
scanf("%d",&n);
int a[n];
printf("\nEnter the elements");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int  large,small;
large=a[0];
small=a[0];
for(int j =1;j<n;j++){
if(a[j]>large){
large=a[j];
l=j;
}
if(a[j]<small){
s=j;
small=a[j];
}
}
int temp=0;
temp=a[l];
a[l]=a[s];
a[s]=temp;
for(int k=0;k<n;k++){
printf(" %d ",a[k]);
}

  
    
    return 0;
}