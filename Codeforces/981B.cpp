#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
unordered_map<ll,ll> s;
ll sum=0;
for(ll i=0;i<n;i++)
{
    ll a,x;
    cin>>a>>x;
    s[a]=x;
    sum+=x;
}
//cout<<sum<<"  ";
ll m;
cin>>m;
for(ll i=0;i<m;i++)
{
    ll b,y;
    cin>>b>>y;
    if(s[b]!=0)
    { 
        //cout<<"*";
        if(s[b]<y)
        { 
            //cout<<"#";
            sum-=s[b];
            s[b]=y;
            sum+=y;
        }
        //cout<<sum<<" ";
    }
    else {
     s[b]=y;
     sum+=y;
    }
}
cout<<sum;
return 0;
}
