#include <bits/stdc++.h> 

#define ll long long int

using namespace std;

int main()

{ 
ios_base::sync_with_stdio(false);

cin.tie(NULL);
ll n;
cin>>n;
ll j=0;
while(1)
{  
    ll sum=0;
    j++;
    while(n)
    {  ll k=n%10;
        sum+=k*k;
        n/=10;
    }
    if(sum==1)
    {
        cout<<j;
        break;
    }
    else if(sum==89)
    {
        cout<<"-1"; break;
    }
    n=sum;
}

return 0;

}
