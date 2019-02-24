#include <bits/stdc++.h> 

#define ll long long int

using namespace std;

int main()

{ 
ios_base::sync_with_stdio(false);

cin.tie(NULL);
ll n;
while(cin>>n)
{   if(n==1)
{
    cout<<"NIE\n";
    continue;
}
if(n==0)
{
    cout<<"TAK\n";
    continue;
}
     ll count=0;
     while(n)
     {
         count+=n&1;
         n=n>>1;
     }
     if(count==1)
     cout<<"TAK\n";
     else cout<<"NIE\n";
}
return 0;

}
