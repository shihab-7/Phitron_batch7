#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    stack<int>st;
    queue<int>q;
    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
        st.push(v);
    }
    for(int i=0;i<m;i++)
    {
        int v;
        cin>>v;
        q.push(v);
    }
    bool flag=true;
    if(n==m)
    {
        while(!q.empty() && !st.empty())
        {
            if(q.front()!= st.top())
            {
                flag=false;
                break;
            }
            q.pop();
            st.pop();
        }
    }
    else flag=false;

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}