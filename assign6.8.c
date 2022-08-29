#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("Enter the n natural nuumber \n ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i ==0)
        {
            flag=1;
            break;
        }
        if(flag==1)
            printf("Not Prime");
        else
            printf("prime");
        return 0;
    }

}



