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
ll in[100005];
ll f[100005];
set<ll> ans;
ll t;
//map<pii,ll> mapi;
void dfs(ll node,ll parent)
{
	vis[node]=true;
    in[node]=f[node]=t++;
    ll chil=0;
    for(auto c:a[node])
    {
    	if(c==parent)
    		continue;
    	else if(!vis[c])
    	{
            dfs(c,node);
            f[node]=min(f[node],f[c]);
            if(in[node]<=f[c]&&parent!=-1)
            {
            	ans.insert(node);
            }
            chil++;
    	}
    	else {
    		f[node]=min(f[node],in[c]);
    	}
    }
    if(parent==-1&&chil>1)
    	ans.insert(node);
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
while(1)
{

ll n,m;
cin>>n>>m;
if(n==0&&m==0)
{
	return 0;
}
forn(i,100005)
{
	f[i]=-1;
	in[i]=-1;
	a[i].clear();
	ans.clear();
	vis[i]=false;
}
t=0;
forn(i,m)
{
	ll x,y;
	cin>>x>>y;
	a[x].pb(y);
	a[y].pb(x);
}
for(ll i=1;i<=n;i++)
{
	if(!vis[i])
	{
		dfs(i,-1);
	}
}
cout<<ans.size()<<"\n";
}
return 0;    
}