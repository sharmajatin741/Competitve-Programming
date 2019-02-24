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
   ll k=1,count=0,i=1;
   while(k!=0)
   {
       k=n/pow(5,i);
       count+=k;
       i++;
   }
   cout<<count<<"\n";
}
return 0;
}