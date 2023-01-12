#include<stdio.h>
 


void rev(int a[],int n) {
    for(int i =0; i<n/2; i++){
       int t=a[i];
       a[i]=a[n-i-1];
    a[n-i-1]=t;
    
}}

void print(int a[],int n){
for(int i=0; i<n;i++)
printf("%d ",a[i]);
}

int main()

{

    int b[]= {2,3,7,9,1,4};
    int s=sizeof(b)/sizeof(b[0]);
    rev(b,s);
   print(b,s); 
    return 0;
}

