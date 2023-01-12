#include<stdio.h>

int main()
{ 
   int e=0,o=0;
  int n;
 printf("enter the size \n");
scanf("%d",&n);
 int a[n];
printf("enter the elements");
 for(int j=0;j<n;j++){
  scanf("%d",&a[j]);
}
int b[n],c[n];
for(int i=0;i<n;i++){
if(a[i]%2==0){
b[e]=a[i];
e++;
}
if(a[i]%2!=0){

c[o]=a[i]; o++;
}
}
    printf("array of even elements");
   for(int x=0;x<e;x++){
   printf(" %d ",b[x]);
}
printf("\narray of odd elements"); 
for(int y=0;y<o;y++){
printf(" %d ",c[y]);
}
    return 0;
}