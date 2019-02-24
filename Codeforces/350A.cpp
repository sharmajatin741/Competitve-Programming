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
const ll MOD = 1e15 + 37 ;
const ll INF=1e17;																									
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}             
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
ll n,m;
cin>>n>>m;
ll a[n],b[m];
forn(i,n) cin>>a[i];
forn(i,m) cin>>b[i];
ll maxi=-1e10;
forn(i,n) maxi=max(maxi,a[i]);
forn(i,m)
{
	if(b[i]<=maxi)
     {
     	cout<<"-1";
     	return 0;
     }
} 
ll count=0;
forn(i,n)
{
	if(2*a[i]<=maxi)
	{
		count++;
	}
}
if(count==0)
{
	ll f=0;
	ll ans;
	forn(i,n)
	{
		ll h=a[i]*2;
		ans=h;
		ll o=1;
		forn(j,n)
		{
			if(a[j]>h)
			{
              o=0;
              break;
			}
		}
		if(o==0)
		{
			continue;
		}
		forn(j,m)
		{
          if(b[j]<=h)
          {
          	o=0;
          	break;
          }
		}
		if(o==0)
		{
			continue;
		}
		f=1;
		break;
	}
	if(f==1)
	{
		cout<<ans;
	}
	else cout<<"-1";
	return 0;
}
cout<<maxi;
return 0;    
}
