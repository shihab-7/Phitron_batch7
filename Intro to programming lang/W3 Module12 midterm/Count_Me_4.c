#include<stdio.h>
int main()
{
    char s[10001];
    scanf("%s", s);
    int frq[26]={0};
    for(int i=0; s[i]!='\0'; i++)
    {
        frq[s[i]-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(frq[i]>0)
        {
            printf("%c - %d\n", 'a' + i, frq[i]);
        }
    }
    return 0;
}