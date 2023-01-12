#include<stdio.h>

int main(){
int a[100];
int n,i,b,j;
printf("no.of elements: ");
scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("value to be deleted:");
scanf("%d",&b);
i=0;
while(i<n){
if(a[i]==b){
for(j=i;j<n;j++)
a[j]=a[j+1];
n--;
}
else 
i++;
}
for(i=0;i<n;i++){
printf("%d ",a[i]);
   }
     return 0;
}