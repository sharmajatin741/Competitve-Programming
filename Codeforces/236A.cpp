#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
ll count=0;
ll a[26]={0};
for(ll i=0;s[i];i++)
{
    if(a[s[i]-'a']==0)
    {
        count++;
        a[s[i]-'a']=1;
    }
}
if(count&1)
{
    cout<<"IGNORE HIM!\n";
}
else {
    cout<<"CHAT WITH HER!\n";
}
return 0;
}
