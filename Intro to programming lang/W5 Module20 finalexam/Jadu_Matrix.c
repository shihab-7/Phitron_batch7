#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(n!=m)
    {
        printf("NO\n");
        return 0;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==j)
                {
                    if(a[i][j]!=1)
                    {
                        printf("NO\n");
                        return 0;
                    }
                }
                if((i+j)==(n-1))
                {
                    if(a[i][j]!=1)
                    {
                        printf("NO\n");
                        return 0;
                    }
                }
                if(i!=j && (i+j)!=(n-1))
                {
                    if(a[i][j]!=0)
                    {
                        printf("NO\n");
                        return 0;
                    }
                }
            }
        }
        printf("YES\n");
    }
    return 0;
}