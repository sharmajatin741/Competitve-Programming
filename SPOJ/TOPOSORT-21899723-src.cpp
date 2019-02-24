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
vector<vi> a(20000);
bool vis[20000];
bool f=true;
ll color[20000];
vi ans;
void dfs(ll node)
{
	color[node]=1;
	for(auto c:a[node])
	{
      if(color[c]==0)
      {
      	dfs(c);
      }
      else if(color[c]==1)
      {
      	f=false;
      	//return ;
      }
	}
	color[node]=2;
}
void dfs2(ll node)
{
//	if(vis[node]) return ;
	vis[node]=true ;
	for(auto c:a[node])
	{
		if(!vis[c])
		dfs2(c);
	}
   ans.pb(node);
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
ll n,m;
cin>>n>>m;
forn(i,m)
{
	ll x,y;
	cin>>x>>y;
	a[x].pb(y);
}



for(ll i=1;i<=n;i++)
{
		if(color[i]==0)
		{
			dfs(i);
		}
}

if(!f)
{
	cout<<"Sandro fails.";
	return 0;
}
for(ll i=1;i<=n;i++)
{
	sort(rall(a[i]));
}
for(ll i=n;i>=1;i--)
{
	if(!vis[i])
	{
		dfs2(i);
	}
}
reverse(all(ans));
for(auto c:ans)
cout<<c<<" ";
return 0;    
}