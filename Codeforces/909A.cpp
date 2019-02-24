#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string a,b;
cin>>a>>b;
ll minl=min(a.size(),b.size());
cout<<a[0];
ll found=0;
for(ll i=1;a[i];i++)
{
    if(a[i]<b[0])
        cout<<a[i];
    else {
        cout<<b[0];
        found=1;
        break;
    }
}
if(found==0)
cout<<b[0];
return 0;
}
