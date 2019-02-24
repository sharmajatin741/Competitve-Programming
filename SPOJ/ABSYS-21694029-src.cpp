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
    string a,b,c;
    cin>>a;
    char d[3];
    cin>>d;
    cin>>b;
    char e[3];
    cin>>e;
    cin>>c;
    ll found=0;
    for(ll i=0;a[i];i++)
    {
        if(a[i]=='m')
        {
            found=1;
        }
        
    }
    if(found==1)
    {
        ll j=0,k=0;
        for(ll i=0;b[i];i++)
        j=j*10+b[i]-'0';
        for(ll i=0;c[i];i++)
        k=k*10+c[i]-'0';
        cout<<k-j<<" + "<<j<<" = "<<k<<"\n";
        continue;
    }
    found=0;
    for(ll i=0;b[i];i++)
    {
        if(b[i]=='m')
        {
            found=1;
        }
        
    }
    if(found==1)
    {
        ll j=0,k=0;
        for(ll i=0;a[i];i++)
        j=j*10+a[i]-'0';
        for(ll i=0;c[i];i++)
        k=k*10+c[i]-'0';
        cout<<j<<" + "<<k-j<<" = "<<k<<"\n";
        continue;
    }
     found=0;
    for(ll i=0;c[i];i++)
    {
        if(c[i]=='m')
        {
            found=1;
        }
        
    }
    if(found==1)
    {
        ll j=0,k=0;
        for(ll i=0;a[i];i++)
        j=j*10+a[i]-'0';
        for(ll i=0;b[i];i++)
        k=k*10+b[i]-'0';
        cout<<j<<" + "<<k<<" = "<<j+k<<"\n";
        continue;
    }
}
return 0;
}
