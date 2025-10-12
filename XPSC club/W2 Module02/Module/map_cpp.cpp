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
    //map uses key value pair
    map<int,int>mp;
    mp.insert({1,2});
    mp.insert({2,5});

    mp[3]=10;
    mp[4]=15;
    mp[5]=20;
    // cout<<mp[2]<<endl;
    // cout<<mp[3]<<endl;
    //insert works in logn time complexity
    // for (auto it:mp)
    // {
    //     //keys are always sorted in map
    //     cout<<it.first<<" -> "<<it.second<<endl;
    // }
    // auto it=mp.find(3);
    // cout<<it->second<<endl;
    // //if any key is not found it returns mp.end()
    // auto it2=mp.find(10);
    // if(it2==mp.end()) cout<<"not found"<<endl;
    auto it=mp.find(10);
    if(it!=mp.end()) mp.erase(it);
    // printmp(mp);
    cout<<mp.size()<<endl;

    auto it2=mp.lower_bound(3); //greater than or equal to 3
    cout<<it2->first<<" "<<it2->second<<endl;
    auto it3=mp.upper_bound(3); //greater than 3, return strictly greater
    cout<<it3->first<<" "<<it3->second<<endl;

    return 0;
}