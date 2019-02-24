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
ll ans=0;
ll found=0;
ll count=0;
for(ll i=0;i<n;i++)
{
    if(s[i]=='R')
    {
        found=1;
        count++;
    }
    else {
        if(found==1)
        {
            found=0;
            if(count>=2)
            {
                ans+=count-1;
            }
            count=0;
        }
    }
}
if(found==1)
{
    found=0;
    if(count>=2)
            {
                ans+=count-1;
            }
            count=0;
}
for(ll i=0;i<n;i++)
{
    if(s[i]=='G')
    {
        found=1;
        count++;
    }
    else {
        if(found==1)
        {
            found=0;
            if(count>=2)
            {
                ans+=count-1;
            }
            count=0;
        }
    }
}
if(found==1)
{
    found=0;
    if(count>=2)
            {
                ans+=count-1;
            }
            count=0;
}
for(ll i=0;i<n;i++)
{
    if(s[i]=='B')
    {
        found=1;
        count++;
    }
    else {
        if(found==1)
        {
            found=0;
            if(count>=2)
            {
                ans+=count-1;
            }
            count=0;
        }
    }
}
if(found==1)
{
    found=0;
    if(count>=2)
            {
                ans+=count-1;
            }
            count=0;
}
cout<<ans;
return 0;
}
