#include<stdio.h>
int main ()
{
    int i,n,count=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if (n%i==0)
        {
        count++;
        break;
        }
    }
    if (count==1)
    printf("not prime");
    else
    printf("prime");
    return 0;
}