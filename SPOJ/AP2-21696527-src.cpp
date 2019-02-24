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
    ll A,B,S;
    cin>>A>>B>>S;
    ll n;
    n=(2*S)/(B+A);
    ll d=(B-A)/(n-5);
    ll a=A-(2*d);
    //cout<<d<<" "<<a;
    cout<<n<<"\n";
    ll j=1;
    for(ll i=a;j<=n;)
    {
        cout<<i<<" ";
        i+=d;
        j++;
    }
    cout<<"\n";
}
return 0;
}
