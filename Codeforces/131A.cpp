#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
  ll found=1;
    for(ll i=1;s[i];i++)
    {
        if(islower(s[i]))
        {
            found=0;
            break;
        }
    }
    if(found==0)
    {
        for(ll i=0;s[i];i++)
        cout<<s[i];
    }
    else {
        for(ll i=0;s[i];i++)
        {    if(isupper(s[i]))
            s[i]=tolower(s[i]);
            else 
            s[i]=toupper(s[i]);
        cout<<s[i];
            
        }
    }
return 0;
}
