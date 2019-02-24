#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll max=0;
ll count=0;
while(n--)
{
    ll a,b;
    cin>>a>>b;
    count-=a;
    count+=b;
    if(count>max)
    max=count;
}
cout<<max;
return 0;
}
