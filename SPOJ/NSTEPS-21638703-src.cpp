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
   ll x,y;
   cin>>x>>y;
   if(x-y==2||x==y)
   { if(x%2==0)
      {
          cout<<x+y<<"\n";
      }
      else {
          cout<<x+y-1<<"\n";
      }
       
   }
   else {
       cout<<"No Number\n";
   }
   
}
return 0;
}