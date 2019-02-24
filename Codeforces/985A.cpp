#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll a[n]={0};
for(ll i=0;i<n/2;i++)
{   ll k;
    cin>>k;
    a[k-1]=1;
}
ll sum1=0;
    ll b[n]={0};
    for(ll i=0;i<n;i++)
    {
        if(i%2==0)
        b[i]=1;
    }
    ll i=n-1,j=n-1;
    while(i>=0&&j>=0)
    {
        if(a[i]==1&&b[j]==1)
        {
         sum1+=abs(i-j);
         i--;j--;
        }
        else if(a[i]==1&&b[j]!=1)
        {
            j--;
        }
        else if(a[i]!=1&&b[j]==1)
        {
            i--;
        }
        else {
            i--;j--;
        }
    }
    ll sum2=0;
    ll c[n]={0};
    for(ll i=0;i<n;i++)
    {
        if(i%2!=0)
        c[i]=1;
    }
    i=n-1,j=n-1;
    while(i>=0||j>=0)
    {
        if(a[i]==1&&c[j]==1)
        {
         sum2+=abs(i-j);
         i--;j--;
        }
        else if(a[i]==1&&c[j]!=1)
        {
            j--;
        }
        else if(a[i]!=1&&c[j]==1)
        {
            i--;
        }
        else {
            i--;j--;
        }
    }
cout<<min(sum1,sum2);
return 0;
}
