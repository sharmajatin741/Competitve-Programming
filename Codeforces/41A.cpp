#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string a,b;
cin>>a>>b;
if(a.length()!=b.length())
{
    cout<<"NO";
    exit(0);
}
ll n=a.length();
for(ll i=0;a[i];i++)
{
    if(a[i]!=b[n-i-1])
    {
        cout<<"NO";
        exit(0);
    }
}
cout<<"YES";
return 0;
}
