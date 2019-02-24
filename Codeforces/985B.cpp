#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
char a[n][m];
ll b[m]={0};
for(ll i=0;i<n;i++)
{
for(ll j=0;j<m;j++)
{
    cin>>a[i][j];
  b[j]+=(a[i][j]-'0');
}
}
//for(ll i=0;i<m;i++)
//cout<<b[i]<<" ";
for(ll i=0;i<n;i++)
{ ll c[m];
  for(ll j=0;j<m;j++)
  {    ll k=a[i][j]-'0';
    c[j]=b[j]-k;
  
  }
  ll found=0;
  for(ll j=0;j<m;j++)
  {
      if(c[j]==0)
      {found=1; break;}
  }
  if(found==0)
  {
      cout<<"YES";
      exit(0);
  }
}
cout<<"NO";
return 0;
}
