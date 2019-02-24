#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
ll p=s[0];
ll found=0;
for(ll i=1;s[i];i++)
{
    if(s[i]!=p)
    {
        found=1;
        break;
    }
}
if(found==0)
{
    cout<<"0";
}
else{
    
    if(equal(s.begin(), s.begin() + s.size()/2, s.rbegin()))
    {
        cout<<s.length()-1;
    }
    else {
        cout<<s.length();
    }
    
}
return 0;
}
