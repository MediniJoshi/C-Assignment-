#include<stdio.h>

int main()
{
   int a[100],i,j,k,count=0,dup[100],number;
printf("Enter the size of array");
scanf("%d",&number);
printf("\nEnter Elements of array");
for(int j=0;j<number;j++){
scanf("%d",&a[j]);
dup[j]=-1;
}
for(int i =0;i<number;i++){
for(j=i+1;j<number ;j++){
if(a[i]==a[j]){
for(int k=j;k<number;k++){
a[k]=a[k+1];
}
j--;
number--;
}
}
}
printf("After deleting duplicates");
for(int m=0;m<number;m++){
printf("%d ",a[m]);
} 

    return 0;
}