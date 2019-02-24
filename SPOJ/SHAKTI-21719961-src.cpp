#include <bits/stdc++.h> 

#define ll long long int

using namespace std;

int main()

{ 
ios_base::sync_with_stdio(false);

cin.tie(NULL);

ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    if(n&1)
    {
        cout<<"Sorry Shaktiman\n";
    }
    else cout<<"Thankyou Shaktiman\n";
}
return 0;

}