#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

int main()
{
    shihab
    test
    {
        int x;
        cin>>x;
        auto digit_sum=[&](int n)
        {
            int sum = 0;
            while(n){
                sum += n%10;
                n /= 10;
            }
            return sum;
        };
        int cnt=0;
        for(int i=1;i<=90;i++)
        {
            int y=x+i;
            if(digit_sum(y)==i) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}