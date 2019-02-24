#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll ans=0;
ll x=0;
while(n--)
{
   string s;
   cin>>s;
   if(s[0]=='+'||s[2]=='+')
   x++;
   else if(s[0]=='-'||s[2]=='-')
   x--;
}
cout<<x;
return 0;
}
