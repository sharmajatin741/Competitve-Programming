#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
ll b[10001];
ll castle(ll a[],ll n,ll i)
{   
    //cout<<a[2];
    if(i>n-1)
    {
        return 0;
    }
    if(b[i]!=0)
    {
        return b[i];
    }
    ll first,second;
    first=a[i]+castle(a,n,i+2);
    second=castle(a,n,i+1);
    return b[i]=max(first,second);
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
ll f=t;
while(t--)
{    
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<10001;i++)
    {
        b[i]=0;
    }
    cout<<"Case "<<f-t<<": "<<castle(a,n,0)<<"\n";
    
}
return 0;
}
