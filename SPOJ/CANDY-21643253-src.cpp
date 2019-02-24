#include <bits/stdc++.h> 

#define ll long long int

using namespace std;

int main()
{ 
ios_base::sync_with_stdio(false);

cin.tie(NULL);
ll n;
while(1)
{
    cin>>n;
    if(n==-1)
    {
        break;
    }
    ll a[n];
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%n!=0)
    {
        cout<<"-1\n";
        continue;
    }
    ll u=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]<sum/n)
        u+=(sum/n)-a[i];
    }
    cout<<u<<"\n";
}
return 0;

}