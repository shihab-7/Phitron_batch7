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
    int n;
    cin>>n;
    // set<int>s;
    // //set sorted, unique elements
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     s.insert(x); //log N
    // }
    // for(auto a:s)
    // {
    //     cout<<a<<" ";
    // }
    // auto it=s.find(3); //log N
    // if(it!=s.end()) cout<<endl<<"Found: "<<*it<<endl;
    // else cout<<endl<<"Not Found"<<endl;
    // s.erase(10); //log N
    // cout<<endl;
    // for(auto a:s) cout<<a<<" ";
    // count() can be used to check presence
    // if(s.count(10)) cout<<endl<<"Present"<<endl;
    // else cout<<endl<<"Not Present"<<endl;

    // int val;
    // cin>>val;
    // auto it2=s.lower_bound(val); //log N
    // cout<<endl<<*it2<<endl;  //element ta thakle seta dibe, na thakle tar porer ta dibe, r napaile s.end() dibe

    // auto it3=s.upper_bound(val); //log N
    // cout<<endl<<*it3<<endl; //element ta thakle tar porer ta dibe, na paile s.end() dibe

    //multiset sorted, non-unique elements
    multiset<int>ms;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ms.insert(x); //log N
    }

    for(auto a:ms) cout<<a<<" ";
    //shop operation support kore set er just erase() er complexity case wise alada
    ms.erase(10); //sob gula 10 ke erase korbe complexity O(log N + k) jekhane k hocche 10 koto gula ache
    //single element erase korte chaile, find kore kore iterator ber kore akata kore erase kora jay
    auto it=ms.find(20); //log N
    if(it!=ms.end()) ms.erase(it); //log N
    //count() er complexity o same erase er motoi
    //baadbaki shob same like upper_bound, lower_bound, find etc
    
    return 0;
}