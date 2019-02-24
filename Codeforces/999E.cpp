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
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}
bool vis[5001];
vector<vi> a(5001);
bool ok[5001];
ll t;
void dfs(ll node)
{
	if(vis[node]) return ;
	vis[node]=true;
	for(auto c:a[node]) dfs(c);
}
void dfs1(ll node)
{
	if(ok[node]) return ;
    t++; ok[node]=true;
    for(auto c: a[node]) dfs1(c);
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
ll n,m,s;
cin>>n>>m>>s;
forn(i,m)
{
	ll x,y;
	cin>>x>>y;
	a[x].pb(y);
}
dfs(s);
vector<pii> e;
for(ll i=1;i<=n;i++)
{
	if(!vis[i])
	{
	   for(ll j=0;j<5001;j++) ok[j]=false;
	   t=0;
	   dfs1(i);
       e.pb({t,i});
	}
}
sort(all(e));
reverse(all(e));
ll ans=0;
for(auto c:e)
{
	if(!vis[c.se])
	{
		dfs(c.se);
		ans++;
	}
}
cout<<ans;
return 0;
}
