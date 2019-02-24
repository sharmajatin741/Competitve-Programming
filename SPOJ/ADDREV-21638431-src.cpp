#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
ll f(ll h)
{
    ll k=0;
    while(h)
    {
        k=k*10+(h%10);
        h/=10;
    }
    return k;
}
int main() 
{ ios_base::sync_with_stdio(false); 
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
   ll a,b;
   cin>>a>>b;
   ll sum;
   sum=f(a)+f(b);
   cout<<f(sum)<<"\n";
}
return 0;
}