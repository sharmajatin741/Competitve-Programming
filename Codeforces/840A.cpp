#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
vector<pair<ll,ll>> a(n),b(n);
for(ll i=0;i<n;i++)
{
    cin>>a[i].first;
    a[i].second=i;
}
for(ll i=0;i<n;i++)
{
    cin>>b[i].first; b[i].second=i;
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
vector <pair<ll,ll>> d(n);
for(ll i=0;i<n;i++)
{ 
    ll f=b[i].second;
    d[i].first=f;
    d[i].second=a[n-i-1].first;
}
sort(d.begin(),d.end());
for(ll i=0;i<n;i++)
{
    cout<<d[i].second<<" ";
}
return 0;
}
