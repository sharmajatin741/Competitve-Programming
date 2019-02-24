#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
if(s.length()<5)
{
    cout<<"NO";
    exit(0);
}
string find="hello";
ll m=0;
char ex[105];
for(ll i=0;i<s[i];i++)
{
    if(s[i]==find[m])
    {  ex[m]=s[i];
        m++;
    }
}
ll k=strcmp(ex,"hello");
if(k==0)
{
    cout<<"YES";
}
else {
    cout<<"NO";
}
return 0;
}
