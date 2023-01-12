#include<stdio.h>

int main()
{ 
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
if(a[j]>large)
large=a[j];
if(a[j]<small)
small=a[j];
}

    printf("\nThe smallest element is %d",small);
    printf("\nThe largest element is %d",large);
    
    return 0;
}