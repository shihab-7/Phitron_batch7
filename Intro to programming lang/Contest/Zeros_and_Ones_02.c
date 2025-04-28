#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    if(a[x-1]==0) a[x-1]=1;
    else a[x-1]=0;
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}