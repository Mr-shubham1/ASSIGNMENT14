#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("enter 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum is %d",sum);
   return 0;
}