#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll a[n];
ll l=0;
ll prev;
ll max=-1;
for(ll i=0;i<n;i++)
{
    cin>>a[i];
    if(i==0)
    {
        prev=a[i];
        l++;
        continue;
    }
    if(a[i]>=prev)
    {
        l++;
        prev=a[i];
    }
    else {
        if(l>max)
        {
            max=l;
        }
        l=1;
        prev=a[i];
    }
    
}
if(l!=0)
{
    if(l>max)
    max=l;
}
cout<<max;
return 0;
}
