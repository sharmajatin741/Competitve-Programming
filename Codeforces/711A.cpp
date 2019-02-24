#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
char a[n][5];
ll found=0;
for(ll i=0;i<n;i++)
{
    for(ll j=0;j<5;j++)
    {
        cin>>a[i][j];
    }
    if(((a[i][0]=='O')&&(a[i][1]=='O'))&&(found==0))
    {
        a[i][0]='+';
        a[i][1]='+';
        found=1;
    }
    else if(((a[i][3]=='O')&&(a[i][4]=='O'))&&(found==0))
    {
         a[i][3]='+';
        a[i][4]='+';
        found=1;
    }
}
if(found)
{ cout<<"YES\n";
for(ll i=0;i<n;i++)
{
    for(ll j=0;j<5;j++)
    cout<<a[i][j];
    cout<<"\n";
}
}
else cout<<"NO";
return 0;
}
