#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll a,b,c;
cin>>a>>b>>c;
ll maxi=-1;
ll i,j,k,l,m,n;
i=a+b+c;
maxi=max(maxi,i);
j=a*b*c;
maxi=max(maxi,j);
k=(a+b)*c;
maxi=max(maxi,k);
l=a*(b+c);
maxi=max(maxi,l);
m=a*b+c;
maxi=max(maxi,m);
n=a+b*c;
maxi=max(maxi,n);
cout<<maxi;
return 0;
}
