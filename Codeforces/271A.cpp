#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
for(ll i=n+1;;i++)
{
    ll found=1;
    ll k=i;
    ll a[10]={0};
    while(k)
    {
        ll j=k%10;
        if(a[j]!=0)
        {
            found=0;
            break;
        }
        else{
            a[j]=1;
        }
        k/=10;
    }
    if(found==1)
    {
        cout<<i;
        break;
    }
}
return 0;
}
