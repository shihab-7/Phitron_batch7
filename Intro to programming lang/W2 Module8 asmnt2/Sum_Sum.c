#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0) s1+=a[i];
        else s2+=a[i];        
    }
    printf("%d %d\n",s1,s2);
    return 0;
}