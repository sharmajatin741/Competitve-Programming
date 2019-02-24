#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
/*ll f(ll a,ll j)
{
    double s=1;
    for(ll i=1;i<=j;i++)
    {
        s=(s*(a-i+1))/i;
    }
    return s;
}*/
int main() 
{ ios_base::sync_with_stdio(false); 
cin.tie(NULL);
ll n;
while(cin>>n)
{
    if(n==0)
    break;
    else { ll sum=0;
          for(ll i=0;i<n;i++)
          {
              ll k;
              k=n-i;
              sum+=k*k;
             // cout<<k<<" ";
          }
         cout<<sum<<"\n";
    }
}
return 0;
}