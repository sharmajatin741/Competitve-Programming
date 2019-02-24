#include <bits/stdc++.h> 

#define ll long long int

using namespace std;

int main()

{ 
ios_base::sync_with_stdio(false);

cin.tie(NULL);
ll n;
cin>>n;
ll k=sqrt(n);
ll count=0;
for(ll i=2;i<=n;i++)
{
    for(ll j=i;j<=n;j++)
    {
        if(i*j>n)
        break;
        else
         {count++; 
         //cout<<i<<" "<<j;
         }
    }
}
cout<<count+n;
return 0;

}