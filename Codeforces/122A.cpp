#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
ll islucky(ll n)
{  if(n<4)
  {
      return 0;
  }
    while(n)
    {  ll k=n%10;
        if(!(k==4||k==7))
        {
           return 0;   
        }
        n/=10;
    }
    return 1;
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
  ll n;
  cin>>n;
  if(islucky(n))
  {
      cout<<"YES";
      return 0;
  }
  else {
      for(ll i=1;i<n;i++)
      {
          if(islucky(i))
          {
              if(n%i==0)
              {
                  cout<<"YES";
                  return 0;
              }
          }
      }
      
  }
cout<<"NO";
return 0;
}
