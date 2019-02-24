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
ll b=0,e=n-1;
while(b<e)
{
    sum+=a[e]-a[b];
    e--;
    b++;
}
cout<<sum;
return 0;
}
