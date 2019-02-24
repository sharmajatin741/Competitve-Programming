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
const ll MOD = 1e9 + 7 ;
ll mpow(ll a,ll b)
{
	if(b==0)
	{
		return 1;
	}
   a=a%MOD;
   ll res=1;
   while(b>0)
   {
   	if(b&1) {
   		res=(res*a)%MOD;
   	}
   	a=(a*a)%MOD;
   	b=b>>1;
   }
   return res;
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
ll l,r,x,y;
cin>>l>>r>>x>>y;
if(y%x!=0)
{
	cout<<0;
	return 0;
}
ll s=y/x;
ll ans=0;
for(ll i=1;i*i<=y/x;i++)
{
	if(s%i==0)
	{
       if(i*x<=r&&(s/i)*x<=r&&(s/i)*x>=l&&(i*x)>=l)
       {
           if(__gcd(i,s/i)==1)
           {
           	if(i==s/i)
           	{
              ans++;
           	}
           	else ans+=2;
           }
       }
	}
}
cout<<ans;
return 0;
}
