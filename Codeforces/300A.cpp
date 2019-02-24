#include <bits/stdc++.h> 
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pii;
typedef double ld;
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD = 1e9 + 7 ;
const ll INF=1e17;																									
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}             
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
ll l;
cin>>l;
vi n,p,z;
forn(i,l)
{
	ll x;
	cin>>x;
	if(x==0)
	{
		z.pb(x);
	}
	else if(x<0)
	{
		n.pb(x);
	}
	else p.pb(x);
}
ll k=0;
vi ans;
if(n.size()%2==0&&n.size()>0)
{
	//cout<<"*";
for(auto c:n)
{
    if(k==0)
    	ans.pb(c);
    else if(k==1)z.pb(c);
    else p.pb(c);
    k++;
}
}
else {
	k=0;
   for(auto c:n)
   {
   	if(k==0)
      ans.pb(c);
    else p.pb(c);
    k++;
   }
}
cout<<ans.size()<<" ";
for(auto c:ans) cout<<c<<" ";
cout<<"\n";
cout<<p.size()<<" ";
for(auto c:p) cout<<c<<" ";
cout<<"\n";
cout<<z.size()<<" ";
for(auto c:z) cout<<c<<" ";
return 0;    
}
