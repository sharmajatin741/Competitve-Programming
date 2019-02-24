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
    string s;
    cin>>s;
    ll n=s.length();
    if(n>10)
    {
        cout<<s[0]<<n-2<<s[n-1]<<"\n";
    }
    else cout<<s<<"\n";
}
return 0;
}
