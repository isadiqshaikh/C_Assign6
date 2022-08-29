#include<stdio.h>
int main()
{
    int i , a,b;
    printf("Enter a number for lcm");
    scanf("%d",&a);
    printf("Enter a number for lcm");
    scanf("%d",&b);
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            break;
        }
    }
    printf("The LCM is %d ",i);
}
