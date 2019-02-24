#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll a[n];
ll ans=0;
ll b[5]={0};
for(ll i=0;i<n;i++)
{
   cin>>a[i];
   b[a[i]]++;
}
ans+=b[4];
if(b[3]>=b[1])
{
    ans+=b[1];
    ans+=b[3]-b[1];
    if(b[2]%2!=0)
ans++;
ans+=b[2]/2;
}
else {
    ans+=b[3];
    ll k;
    k=b[1]-b[3];
    b[1]=k;
    if(b[2]%2==0)
    {
        ans+=b[2]/2;
        if(b[1]%4!=0)
        ans++;
        ans+=b[1]/4;
    }
    else {
        
        ans+=b[2]/2;
        b[2]=b[2]%2;
        if(b[1]>=2)
        {
            ans++;
            b[1]-=2;
        }
        else {
            ans++;
            cout<<ans;
            exit(0);
            
        }
        if(b[1]%4!=0)
        ans++;
        ans+=b[1]/4;
        
    }
    
}
    
cout<<ans;
return 0;
}
