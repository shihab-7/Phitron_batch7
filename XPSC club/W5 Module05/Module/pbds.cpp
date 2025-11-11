//pbds ==> Policy Based Data Structures
/*
to use pbds we need to include following header files
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
to use it as set less<T> means ascending order
to use it as multiset less_equal<T> means ascending order

*/



#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

int main()
{
    shihab
    //use as set
    // pbds<int> s;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     s.insert(x);
    // }
    // for(auto x:s)
    // {
    //     cout<<x<<" ";
    // }

    //multiset hishebe use korle erase function ektu alada vabe kaj kore
    //oitar jonno pair<> use korte hoy , pair er vitor index soho value rakhte hoy
    // pbds<pair<int,int>> s;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     s.insert({x,i}); //to make unique value
    // }
    // for(auto [x,y]:s)
    // {
    //     cout<<x<<" "<<y<<endl;
    // }
    // s.erase({1,5}); //erase korar somoy oita je index e chilo oita dite hobe
    // cout<<"after erase"<<endl;
    // for(auto [x,y]:s)
    // {
    //     cout<<x<<" "<<y<<endl;
    // }

    //log n a ber kora jay kono value er strictly less kotogulo value ache
    pbds<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    int in=s.order_of_key(19); //4 er strictly less kotogulo value ache seta ber korbe
    cout<<in<<endl;

    //log n a ber kora jay kono index e kon value ache
    int pos=*s.find_by_order(3); //3 no index e kon value ache seta ber korbe
    cout<<pos<<endl;
    return 0;
}