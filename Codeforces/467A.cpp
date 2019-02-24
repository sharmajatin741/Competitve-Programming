#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll count=0;
for(ll i=0;i<n;i++)
{
    ll p,q;
    cin>>p>>q;
    if((q-p)>=2)
    count++;
}
cout<<count;
return 0;
}
