#include<stdio.h>
int main()
{
    int a[10],i,j;
    printf("enter 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]<a[j])
             continue;
             else
             break;
        }
        if(j==10)
        {
        printf("%d",a[i]);
        break;
        }

    }

    return 0;
}