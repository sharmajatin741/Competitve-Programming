#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll d1,d2,d3;
cin>>d1>>d2>>d3;
ll mini=d1+d2+d3;
mini=min(mini,2*(d1+d2));
mini=min(mini,2*(d2+d3));
mini=min(mini,2*(d1+d3));
cout<<mini;
return 0;
}
