#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main() 
{ ios_base::sync_with_stdio(false); 
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
   ll n;
   cin>>n;
   ll s[1000000];
   s[0]=1;
   ll m=1;
   for(ll i=2;i<=n;i++)
   { ll temp=0;
      for(ll j=0;j<m;j++)
      { 
          ll k;
          k=s[j]*i+temp;
          s[j]=k%10;
          temp=k/10;
      }
      while(temp)
      { 
          s[m]=temp%10;
          m++;
          temp/=10;
      }
      //cout<<"*";
   }
   for(ll i=m-1;i>=0;i--)
   {
       cout<<s[i];
   }
   cout<<"\n";
   
}
return 0;
}