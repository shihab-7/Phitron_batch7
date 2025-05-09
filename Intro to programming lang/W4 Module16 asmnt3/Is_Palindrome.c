#include<stdio.h>

int is_palindrome(char s[])
{
    int st=0, ed=strlen(s)-1;
    while(st<ed)
    {
        if(s[st] != s[ed]) return 0;
        st++;
        ed--;
    }
    return 1;
}

int main()
{
    char s[1001];
    scanf("%s", s);

    if(is_palindrome(s)) printf("Palindrome\n");
    else printf("Not Palindrome\n");
     
    return 0;
}