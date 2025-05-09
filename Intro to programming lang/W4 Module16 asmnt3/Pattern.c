#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        if(i%2==0)
        {
            for(int k=1;k<=2*i-1;k++)
            {
                printf("-");
            }
        }
        else
        {
            for(int m=1;m<=2*i-1;m++)
            {
                printf("#");
            }
        }
        printf("\n");
    }

    for(int i=n-1;i>=1;i--)
    {
       for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        if(i%2==0)
        {
            for(int k=1;k<=2*i-1;k++)
            {
                printf("-");
            }
        }
        else
        {
            for(int m=1;m<=2*i-1;m++)
            {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}