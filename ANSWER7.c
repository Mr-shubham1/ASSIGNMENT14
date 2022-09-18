#include<stdio.h>
int main()
{
    int n,i,t,j;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("enter %d numbers\n",n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
             t=a[i];
             a[i]=a[j];
             a[j]=t;
            }
        }
    }
    printf("second largest number is %d",a[1]);
    return 0;

}