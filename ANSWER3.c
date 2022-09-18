#include<stdio.h>
int main()
{
    int a[10],i,sumevn=0,sumodd=0;
    printf("enter 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if((a[i]%2)==0)
        sumevn+=a[i];
        else
        sumodd+=a[i];
    }
    printf("sum of even numbers is %d an odd numbers is %d",sumevn,sumodd);
    return 0;
}