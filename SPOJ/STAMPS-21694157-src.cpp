#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
ll y=t;
while(t--)
{  
    ll k,n;
    cin>>k>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    ll s=0;
    ll count=0;
    ll found=0;
    for(ll i=n-1;i>=0;i--)
    {   
        count++;
        s+=a[i];
        if(s>=k)
        { found=1; break;}
    }
    if(found==1)
    cout<<"Scenario #"<<y-t<<":"<<"\n"<<count<<"\n\n";
    else cout<<"Scenario #"<<y-t<<":"<<"\n"<<"impossible"<<"\n\n";
}
return 0;
}
