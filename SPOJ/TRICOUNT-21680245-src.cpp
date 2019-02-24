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
    ll n;
    cin>>n;
    ll s=(n*(n+2)*(2*n+1))/8;
    cout<<s<<"\n";
}
return 0;
}
