#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

bool check_kth_bit_on_off(int n, int k)
{
    return ((n>>k)&1);
}
void print_binary(int n)
{
    //8 bit representation
    for(int i=7;i>=0;i--)
    {
        if(check_kth_bit_on_off(n,i))
            cout<<1<<" ";
        else
            cout<<0<<" ";
    }
    cout<<endl;
}

int main()
{
    shihab
    int a,b;
    cin>>a>>b;
    // cout<<"OR :"<<(a|b)<<endl;
    // cout<<"AND :"<<(a&b)<<endl;
    // cout<<"XOR :"<<(a^b)<<endl;
    // cout<<"LEFT SHIFT :"<<(a<<1)<<endl;
    // cout<<"RIGHT SHIFT :"<<(a>>1)<<endl;
    // //find the digit of power 2
    // cout<<"2 ^ power k(3) : "<<(1<<3)<<endl; //2^3=8

    //check k th bit is on or off
    cout<<"Check Kth bit is on or off : "<<check_kth_bit_on_off(a,3)<<endl;
    cout<<"print 8bit binary value : ";
    print_binary(a);
    cout<<endl;
    //set k th bit
    int k=3;
    cout<<"Set Kth bit : "<<(a|(1<<k))<<endl;
    //unset k th bit
    cout<<"Unset Kth bit : "<<(a&(~(1<<k)))<<endl;
    //toggle k th bit
    cout<<"Toggle Kth bit : "<<(a^(1<<k))<<endl;

    //buit-in function
    cout<<"Number of set bits in a : "<<__builtin_popcount(a)<<endl;

    //hightest set bit position (msb)
    cout<<__lg(a)<<endl;

    
    return 0;
}