#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll sm=0,sc=0;
for(ll i=0;i<n;i++)
{
    ll m,c;
    cin>>m>>c;
    if(m>c)
    {
        sm++;
    }
    else if(c>m)
    {
        sc++;
    }
}
if(sm>sc)
cout<<"Mishka";
else if(sm<sc)
cout<<"Chris";
else cout<<"Friendship is magic!^^";
return 0;
}
