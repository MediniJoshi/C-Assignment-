#include<stdio.h>


void rev(int a[],int n) {
    for(int i =n-1; i>=0; i--)
        printf("%d ",a[i]);
}

int main()
{
    int b[]= {2,3,7,9,1,4};
    int s=sizeof(b)/sizeof(b[0]);
    rev(b,s);

    return 0;
}

