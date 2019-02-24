#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
vector<vector<ll>>a(n+1);
for(ll i=1;i<=n-1;i++)
{
    ll p;
    cin>>p;
    //p--;
    a[p].push_back(i+1);
}
for(ll i=1;i<n;i++)
{    ll count=0;
    if(a[i].empty())
    continue;
    //cout<<"*";
    for(ll x: a[i])
    {   
        //<<x;
        if(a[x].empty())
        { 
        count++;
        //cout<<x;
        }
    }
    if(count<3)
    {
        cout<<"No";
        exit(0);
    }
}
    cout<<"Yes";
return 0;
}
