#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll count=0;
while(n)
{
    ll k=n%10;
    if((k==4)||(k==7))
    count++;
    n/=10;
}
if(count==0)
{
    cout<<"NO";
    exit(0);
}
while(count)
{
    ll k=count%10;
    if((k!=4)&&(k!=7))
    {
        cout<<"NO";
        exit(0);
    }
    count/=10;
}
cout<<"YES";
return 0;
}
