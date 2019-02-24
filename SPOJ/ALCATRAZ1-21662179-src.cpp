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
    string s;
    cin>>s;
    ll sum=0;
    for(ll i=0;s[i];i++)
    {
        sum+=s[i]-'0';
    }
    cout<<sum<<"\n";
}

return 0;

}
