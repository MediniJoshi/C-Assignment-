#include<stdio.h>

int main()
{ int trump=0,biden=0;
   int t[10];
   int b[10];
printf("Enter state votes of Trump");
 for(int i=0;i<10;i++)
   scanf("%d",&t[i]);

printf("Enter state votes of Biden");
for(int j=0 ;j<10;j++)
scanf("%d",&b[j]);

for(int k=0;k<10;k++){
if(t[k]>b[k]){
trump++;
printf("winner of state %d is trump with %d votes\n",k+1,t[k]);
}
else if(t[k]<b[k]){
biden++;
printf("winner of state %d is Biden with %d votes\n",k+1,b[k]);
}
else
printf("it's a draw with %d\n",b[k]);
}
if(trump>biden)
printf("Winner is trump ");
else if(trump==biden)
printf("it's a draw");
else 
printf("Winner is Biden");


    return 0;
}