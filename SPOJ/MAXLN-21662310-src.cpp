#include <bits/stdc++.h> 

#define ll long long int

using namespace std;

int main()

{ 
ios_base::sync_with_stdio(false);

cin.tie(NULL);
ll t;
cin>>t;
for(ll i=1;i<=t;i++)
{
    ll r;
    cin>>r;
    printf("Case %lld: %0.2f\n",i,0.25+(4*r*r));
}

return 0;

}
