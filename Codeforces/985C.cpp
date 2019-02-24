#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,k,l;
cin>>n>>k>>l;
vector <ll> a;
a.assign(n*k,0);
for(ll i=0;i<n*k;i++)
{
  cin>>a[i];
}
sort(a.begin(),a.end());
ll rg=(ll)(upper_bound(a.begin(),a.end(),a[0]+l)-a.begin());
if(rg<n)
{
    cout<<"0";
    exit(0);
}
ll u=0;
ll sum=0;
for(ll i=0;i<n;i++)
{
    sum+=a[u++];
    for(ll j=0;j<k-1;j++)
    {
        if(rg-u>n-i-1)
        {
            u++;
        }
        else  break;
    }
}
cout<<sum;
return 0;
}
