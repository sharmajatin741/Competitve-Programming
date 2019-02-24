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
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
ll n,m;
cin>>n>>m;
vector<pair<pair<ll,ll>,ll>> a;
ll pos;
forn(i,n)
{
	ll x;
	cin>>x;
	a.pb({{x,0},i});
}
for(ll i=0;i<a.size();i++)
{
	pos=a[i].se;
	if(a[i].fi.fi>m)
	{
		a.pb({{a[i].fi.fi-m,m},a[i].se});
	}
	else {
		continue;
	}
}
cout<<pos+1;
return 0;
}
