#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
ll count0=0,count1=0;
ll found=0;
for(ll i=0;s[i];i++)
{
    if(s[i]=='0')
    {
        count0++;
        found=1;
        if(count0==7)
        {
            cout<<"YES\n";
            exit(0);
        }
    }
    else {
        if(found==1)
        {
         found=0;
         count0=0;
        }
    }
}
found=0;
for(ll i=0;s[i];i++)
{
    if(s[i]=='1')
    {
        count1++;
        found=1;
        if(count1==7)
        {
            cout<<"YES\n";
            exit(0);
        }
    }
    else {
        if(found==1)
        {
         found=0;
         count1=0;
        }
    }
}
cout<<"NO\n";
return 0;
}
