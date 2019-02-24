#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
ll found=0;
for(ll i=0;s[i];i++)
{
    if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
    {
        found=1;
        break;
    }
}
if(found)
cout<<"YES";
else cout<<"NO";
return 0;
}
