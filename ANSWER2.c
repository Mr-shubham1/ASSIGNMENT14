#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("enter 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/10.0;
    printf("average is %.2f",avg);
    return 0;
}