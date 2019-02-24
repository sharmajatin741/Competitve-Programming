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
vector<vi> a(800);
bool vis[800];
ll in[800];
ll f[800];
ll t;
vector<pii> ans;
void dfs(ll node,ll parent)
{
	vis[node]=true;
    in[node]=f[node]=t++;
    for(auto c:a[node])
    {
    	if(c==parent)
    		continue;
    	else if(!vis[c])
    	{
            dfs(c,node);
            f[node]=min(f[node],f[c]);
            if(in[node]<f[c])
            {
            	ans.pb({min(node,c),max(node,c)});
            }
    	}
    	else {
    		f[node]=min(f[node],in[c]);
    	}
    }
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
ll tt;
cin>>tt;
ll r=tt;
//cout<<r;
while(tt--)
{
	for(ll i=0;i<800;i++)
	{
		vis[i]=false;
		a[i].clear();
		f[i]=-1;
		in[i]=-1;
		ans.clear();
	}
	t=0;
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
		dfs(i,-1);
	}
}
sort(all(ans));
cout<<"Caso #"<<r-tt<<"\n";
if(ans.size()==0)
{
	cout<<"Sin bloqueos\n";
	continue;
}
cout<<ans.size()<<"\n";
for(auto c:ans)
{
	cout<<c.fi<<" "<<c.se<<"\n"; 
}
//cout<<"\n";
}
return 0;    
}