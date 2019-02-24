#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
    ll n,k,s=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>k;
        s=(s+k%n)%n;
    }
    if(s==0)
    cout<<"YES\n";
    else cout<<"NO\n";
}
return 0;
}
