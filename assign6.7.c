#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter a nuumber for calculating digit of a number ");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("%d",count);

}



