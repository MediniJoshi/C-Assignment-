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
l=a[0];
 s=a[0];
for(int b=0;b<n;b++){
if(a[b]>l && a[b]<large)
l=a[b];
else if(a[b]<s && a[b]>small)
s=a[b];
}

printf("\nsecond largest no.%d ",l);
printf("\nsecond smallest no.%d ",s);



  
    
    return 0;
}