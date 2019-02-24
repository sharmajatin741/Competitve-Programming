#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll ans=0;
while(n--)
{
    ll i,j,k;
    ll count=0;
    
    cin>>i;
    if(i==1)
    count++;
    
    cin>>j;
    if(j==1)
    count++;
    
    cin>>k;
    if(k==1)
    count++;
    
    if(count>=2)
    ans++;
    
}
cout<<ans;
return 0;
}
