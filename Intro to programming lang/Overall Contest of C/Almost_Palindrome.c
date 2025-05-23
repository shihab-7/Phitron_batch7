#include<stdio.h>
#include<string.h>

int isPal(char a[], int sz)
{
    int l=0,r=sz-1;
    while(l<r)
    {
        if(a[l]!=a[r]) return 0;
        l++;
        r--;
    }
    return 1;
}

int main()
{
     int t;
     scanf("%d",&t);
     while(t--)
     {
        char a[1001];
        scanf("%s",a);
        if(isPal(a,strlen(a))) printf("0\n");
        else
        {
            int frq[26]={0};
            for(int i=0;i<strlen(a);i++)
            {
                frq[a[i]-'a']++;
            }
            int o=0;
            for(int i=0;i<26;i++)
            {
                if(frq[i]%2==1) o++;
            }
            printf("%d\n",o-1);
        }
     }
    return 0;
}