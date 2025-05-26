#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1) a[i]++;
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]%a[i]==0) a[i+1]++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}

/*jekono number k 1 diye vag kora jay tai 1st a 1 k khuje increment kore ensure kora
hoilo j 1st element o 1 nai apatoto
then statement er condition j previous element dara kono element ke vag kora jabe na so 
last element er ager element porjonto akta loop chalay check kora hoilo j jodi divisible hoy
then 1 kore element ta increment kora hobe 
over all dekha jabe jodi
test hishebe 1 1 1 1 deowa hoy then 1st a sob 2 2 2 2 kore then 2 3 2 3  kora hoise a jonno 
kono element e r previous element dara vag kora jay na*/