#include<stdio.h>
int main()
{
    int a[10],i,t;
    printf("enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9/2;i++)
    {
       t=a[i];
       a[i]=a[9-i];
       a[9-i]=t;
    }
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    return 0;
}