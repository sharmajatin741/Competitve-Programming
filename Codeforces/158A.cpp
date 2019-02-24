#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,k;
cin>>n>>k;
ll a[n];
for(ll i=0;i<n;i++)
{
    cin>>a[i];
}
ll count=0;
for(ll i=0;i<n;i++)
{
    if(a[i]<a[k-1])
    break;
    if(a[i]>0)
    count++;
}
cout<<count;
return 0;
}
