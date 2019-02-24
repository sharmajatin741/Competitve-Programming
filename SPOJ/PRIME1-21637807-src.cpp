#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main() 
{ ios_base::sync_with_stdio(false); 
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
    ll a,b;
    cin>>a>>b;
    for(ll i=a;i<=b;i++)
    { ll count=0;
    if(i==1)
    continue;
        for(ll j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            { count=1; break;}
        }
        if(count==0)
        {
            cout<<i<<"\n";
        }
        
    }
    cout<<"\n";
}
return 0;
}