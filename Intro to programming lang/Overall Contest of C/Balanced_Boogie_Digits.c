#include<stdio.h>
int check_digit(int n)
{
    int e=0,o=0;
    while(n>0)
    {
        int tmp=n%10;
        if(tmp%2==0) e++;
        else o++;
        n/=10;
    }
    if(e==o) return 1;
    else return 0;
}
int main()
{
    int l,r;
    scanf("%d %d",&l,&r);
    int flag=0;
    for(int i=l;i<=r;i++)
    {
        if(check_digit(i))
        {
            printf("%d\n",i);
            flag=1;
        }
    }
    if(flag==0) printf("-1\n");
    return 0;
}