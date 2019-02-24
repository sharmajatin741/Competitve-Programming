#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
string s;
cin>>s;
ll c1=0,c0=0;
for(ll i=0;i<n;i++)
{
    if(s[i]=='1')
    {
        c1++;
    }
    else c0++;
}
if(c1>0)
{
    cout<<"1";
    for(ll i=0;i<c0;i++)
    cout<<"0";
}
else{
    cout<<"0";
}
return 0;
}
