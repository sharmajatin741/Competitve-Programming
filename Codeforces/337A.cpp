#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m;
cin>>m>>n;
ll a[n];
for(ll i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
//ll b=0;
//ll e=n-1;
//ll ans=0;
/*while(b<=e)
{
    ll diff=e-b+1;
    if(diff==m)
    {
        ans=a[e]-a[b];
        break;
        
    }
    if(diff==(m+1))
    {
        ll i=a[e-1]-a[b];
        ll j=a[e]-a[b+1];
        if(i<=j)
        e--;
        else {
            b--;
        }
        
    }
    else {
        e--;
        b++;
    }
}*/
ll ans=INT_MAX;
for(ll i=0;i<n;i++)
{
    ll j=i+m-1;
    if(j<n)
    {
        //cout<<"*";
       ll o=a[j]-a[i];
       ans=min(ans,o);
    }
    
}
cout<<ans;
return 0;
}
