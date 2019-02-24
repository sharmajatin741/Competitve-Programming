#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
for(ll i=0;s[i];i++)
{   if(isupper(s[i]))
    s[i]=tolower(s[i]);
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
    {
      continue;    
    }
    else  cout<<"."<<s[i];
    
}
return 0;
}
