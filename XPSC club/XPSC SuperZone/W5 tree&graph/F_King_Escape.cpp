#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

const int N=1005;
bool vis[N][N];
int n,ax,ay,bx,by,cx,cy;
int x[8]={-1,-1,-1,0,0,1,1,1};
int y[8]={-1,0,1,-1,1,-1,0,1};

bool dfs(int i,int j)
{
    if(i==cx &&j==cy) return true;
    vis[i][j]=1;
    for(int k=0;k<8;k++)
    {
        int u=i+x[k];
        int v=j+y[k];
        if((u>=1&&u<=n)&& (v>=1&&v<=n)&& !vis[u][v] && (u!=ax &&v!=ay) &&(abs(u-ax)!=abs(v-ay)))
        {
            if(dfs(u,v)) return true;
        }
    }
    return false;
}

int main()
{
    shihab
    cin>>n>>ax>>ay>>bx>>by>>cx>>cy;
    if(dfs(bx,by)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}