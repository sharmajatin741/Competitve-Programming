#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
ll n=s.length();
n=(n+1)/2;
ll a[n];
ll m=0;
for(ll i=0;s[i];i++)
{
    if(s[i]>='0'&&s[i]<='9')
    a[m++]=s[i]-'0';
}
sort(a,a+n);
for(ll i=0;i<n;i++)
{
    if(i!=n-1)
    {
        cout<<a[i]<<"+";
    }
    else cout<<a[i];
}
return 0;
}
