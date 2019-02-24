#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll k,n,w;
cin>>k>>n>>w;
ll ans=(k*w*(w+1))/2;
if(n>=ans)
cout<<"0";
else cout<<ans-n;
return 0;
}
