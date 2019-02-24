#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m,a;
cin>>n>>m>>a;
ll i,j;
if(n%a==0)
i=n/a;
else i=(n/a)+1;
if(m%a==0)
j=m/a;
else j=(m/a)+1;
cout<<i*j;
return 0;
}
