#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,k,s;
cin>>n>>k>>s;
ll a[n];
for(ll i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
ll count=0;
ll s1=0;
for(ll i=n-1;i>=0;i--)
{
    s1+=a[i]; count++;
    if(s1>=k*s)
    {  
       // cout<<i;
        break;
    }
}
cout<<count;
return 0;
}
