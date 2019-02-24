#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll a[n];
ll sum=0;
for(ll i=0;i<n;i++)
{
    cin>>a[i];
    sum+=a[i];
}
sort(a,a+n);
ll count=0;
ll collect=0;
for(ll i=n-1;i>=0;i--)
{
    collect+=a[i];
    count++;
    if(2*collect>sum)
    {
        break;
    }
}
cout<<count;
return 0;
}
