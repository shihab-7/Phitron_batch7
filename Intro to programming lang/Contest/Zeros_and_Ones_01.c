#include<stdio.h>
int main()
{
    int n,c0=0,c1=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d", &x);
        if(x==0)
            c0++;
        else
            c1++;
    }
    printf("%d %d\n", c0, c1);
    return 0;
}