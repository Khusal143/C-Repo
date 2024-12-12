#include<stdio.h>
int main()
{
    int sum =0,n,rev;
    scanf("%d",&n);
    while(n>0)
    {
        rev = n%10;
        sum=sum*10+rev;
        n/=10;
    }
    printf("%d",sum);
}