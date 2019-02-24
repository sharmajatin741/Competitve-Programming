#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll a[5][5];
ll x,y;
for(ll i=0;i<5;i++)
{
    for(ll j=0;j<5;j++)
    {
        cin>>a[i][j];
        if(a[i][j]==1)
        {
            x=i;
            y=j;
        }
    }
}
cout<<abs(x-2)+abs(y-2);
return 0;
}
