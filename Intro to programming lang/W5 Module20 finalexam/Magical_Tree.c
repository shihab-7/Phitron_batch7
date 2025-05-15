#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n+10;i+=2)
    {
        for(int j=1;j<=((n+10)-i)/2;j++)
        {
            printf(" ");
        }
        for(int k=0;k<i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<5;i++)
    {
        for(int j=1;j<=((n+10)-n)/2;j++)
        {
            printf(" ");
        }
        for(int k=0;k<n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}