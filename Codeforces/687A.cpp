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
vector<vi> a(100005);
bool vis[100005];
ll color[100005];
vector<vi> no(100005);
ll f;
void dfs(ll node,ll clr)
{
	if(vis[node]&&color[node]!=clr)
	{
      f=0;
      return ;
	}
	if(vis[node]) return ;
	vis[node]=true;
	color[node]=clr;
	no[clr].pb(node);
	for(auto c:a[node])
	{
      dfs(c,1-clr);
    }
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
ll n,m;
cin>>n>>m;
forn(i,m)
{
	ll x,y;
	cin>>x>>y;
	a[x].pb(y);
	a[y].pb(x);
}
for1(i,n)
{
	if(!vis[i])
	{
		f=1;
		dfs(i,0);
		if(f==0)
		{
		  cout<<"-1";
		  return 0;
		}
	}
}
cout<<no[0].size()<<"\n";
for(auto c:no[0])
{
	cout<<c<<" "; 
}
cout<<"\n";
cout<<no[1].size()<<"\n";
for(auto c:no[1])
{
	cout<<c<<" ";
}
return 0;    
}
