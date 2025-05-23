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
    int row[n];
    for(int i=0;i<n;i++)
    {
        row[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                row[i]++;
            }
        }
    }
    int mx=row[0],ans=0;
    for(int i=1;i<n;i++)
    {
        if(row[i]>mx)
        {
            mx=row[i];
            ans=i;
        }
    }
    printf("%d\n",ans);
    return 0;
}