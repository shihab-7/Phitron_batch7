#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int m1,m2,d,l;
        scanf("%d %d %d", &m1, &m2, &d);
        l=d-((m1*d)/(m1+m2));
        printf("%d\n", l);
    } 
    return 0;
}