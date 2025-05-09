#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=p-i;j++)
        {
            printf(" ");
        }
        for(int k=i;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}