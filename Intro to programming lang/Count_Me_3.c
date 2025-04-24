#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[10001];
        scanf("%s", s);
        int cap=0,sm=0,dg=0;
        for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                sm++;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                cap++;
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                dg++;
            }
        }
        printf("%d %d %d\n", cap, sm, dg);
    } 
    return 0;
}