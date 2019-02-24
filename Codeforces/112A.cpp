#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string a,b;
cin>>a>>b;
for(ll i=0;a[i];i++)
{
    if(isupper(a[i]))
    a[i]=tolower(a[i]);
    if(isupper(b[i]))
    b[i]=tolower(b[i]);
    
    if(a[i]!=b[i])
    {
        if(a[i]>b[i])
        {
            cout<<"1";
            exit(0);
        }
        else {
            cout<<"-1";
            exit(0);
        }
    }
}
cout<<"0";
return 0;
}
