#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,k;
cin>>n>>k;
ll a[k];
ll max=-1;
ll t,no;
for(ll i=0;i<k;i++)
{
    cin>>a[i];
    ll j=(n/a[i])*a[i];
    if(j>max)
    {
        max=j;
        t=i;
        no=n/a[i];
    }
}
cout<<t+1<<" "<<no;
return 0;
}
