#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll a[n+1];
unordered_map<ll,ll> b;
for(ll i=1;i<n+1;i++)
{
    cin>>a[i];
    b[a[i]]=i;
}
for(ll i=1;i<n+1;i++)
{
    ll k=a[i];
    ll j=a[k];
    if(a[j]==i)
    {
        cout<<"YES";
        exit(0);
    }
}
cout<<"NO";
return 0;
}
