#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,k;
cin>>n>>k;
string s;
cin>>s;
while(k--)
{
    for(ll i=0;i<n;i++)
    {
        if((s[i]=='B')&&(s[i+1]=='G'))
        {
            s[i]='G';
            s[i+1]='B';
            i++;
        }
    }
}
cout<<s;
return 0;
}
