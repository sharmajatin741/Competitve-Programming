#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll x=0,y=0,z=0;
for(ll i=0;i<n;i++)
{
    ll a,b,c;
    cin>>a>>b>>c;
    x+=a; y+=b; z+=c;
}
if((x==0)&&(y==0)&&(z==0))
cout<<"YES";
else cout<<"NO";
return 0;
}
