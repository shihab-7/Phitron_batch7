#include<stdio.h>
void srt(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    srt(a,n);
    int ans=0,l=0,r=n-1;
    while(l<r)
    {
        if(a[l]+a[r]<=k)
        {
            ans++;
            l++;
            r--;
        }
        else r--;
    }
    printf("%d\n",ans);
    return 0;
}