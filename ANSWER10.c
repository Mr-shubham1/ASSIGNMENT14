#include<stdio.h>
int main()
{
    int a[10],i,b[10];
    printf("enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<10;i++)
     {
        b[i]=a[i];
        printf("%d ",b[i]);
     }
     return 0;
     
}