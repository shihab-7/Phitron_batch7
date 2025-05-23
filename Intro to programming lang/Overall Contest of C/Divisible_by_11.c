#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[101];
    scanf("%s",a);
    int e=0,o=0;
    for(int i=strlen(a)-1;i>=0;i--)
    {
        if(i%2==0) e+=a[i]-'0';
        else o+=a[i]-'0';
    }
    if((abs(o-e))%11==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}