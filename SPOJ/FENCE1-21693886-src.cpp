#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
#define M_PI 3.1415926
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
while(1)
{
    ll n;
    cin>>n;
    if(n==0)
    exit(0);
    
    double j;
    j=((n*n)/(2*M_PI));
    cout<<fixed<<setprecision(2)<<j<<"\n";
   // cout<<j<<"\n";
}
return 0;
}
