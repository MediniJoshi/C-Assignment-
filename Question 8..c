#include<stdio.h>

int main()
{ int a[500];
 printf("Enter the marks of 500 students");
for(int i=0;i<500;i++){
  scanf("%d",&a[i]);
}
for(int j=0;j<500;j++){
if(a[j]>=60)
printf("\nMarks of student %d is %d",j+1,a[j]);
}

   
    return 0;
}