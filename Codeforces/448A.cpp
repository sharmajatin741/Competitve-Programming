#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll count=0;
ll a1,a2,a3;
cin>>a1>>a2>>a3;
ll s=a1+a2+a3;
if(s%5==0)
{
    count+=s/5;
}
else {
    count+=(s/5)+1;
}
ll b1,b2,b3;
cin>>b1>>b2>>b3;
s=b1+b2+b3;
if(s%10==0)
{
    count+=s/10;
}
else {
    count+=s/10+1;
}
ll n;
cin>>n;
if(n>=count)
{
    cout<<"YES";
}
else {
    cout<<"NO";
}
return 0;
}
