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
#define rank wadqfewefeewfe
vector<vi> a(300010);
bool vis[300010];
ll in[300010];
ll f[300010];
ll t;
ll n,m;
vector<pii> ans;
ll rank[300010];
ll size[300010];
vector<vi> tree(300010);
ll temp;
ll get(ll node)
{
	while(node!=rank[node])
	{
		node=rank[node];
	}
	return node;
}
void unite(ll node1,ll node2)
{
  ll px=get(node1);
  ll py=get(node2);
  if(size[px]>size[py])
  {
  	swap(px,py);
  }
  rank[px]=py;
  size[py]+=size[px];
}
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
            	//cout<<node<<" "<<c<<"\n";
               ans.pb({node,c});
            }
            else {
            	unite(node,c);
            }
    	}
    	else {
    		f[node]=min(f[node],in[c]);
    	}
    }
}
void makebridge()
{
	for(auto c:ans)
	{
      //cout<<c.fi<<" "<<c.se<<"\n";
      ll px=get(c.fi);
      ll py=get(c.se);
      temp=py;
      //cout<<px<<" "<<py<<"\n";
      tree[px].pb(py);
      tree[py].pb(px);
	}
}
ll maxcount=0;
ll pos;
void dfs1(ll node,ll count)
{
	///if(vis[node]) return ;
     vis[node]=true;
     count++;
     //cout<<count;
     for(auto c:tree[node])
     {
     	if(vis[c]) continue;
     	//cout<<"*";
     	if(count>maxcount)
     	{
     		pos=c;
     		maxcount=count;
     	}
     	dfs1(c,count);
     }
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
for(ll i=0;i<300010;i++)
{
	f[i]=-1;
	in[i]=-1;
}
cin>>n>>m;
//cout<<n<<m;
	forn(i,m)
	{
		ll x,y;
		cin>>x>>y;
		a[x].pb(y);
		a[y].pb(x);
	}
	for(ll i=1;i<=n;i++)
	{
		size[i]=1;
		rank[i]=i;
	}
/*	for(ll i=1;i<=n;i++)
	{
		///cout<<"*";
		for(auto c:a[i])
			cout<<c<<" ";
		cout<<"\n";
	}*/
	t=0;
	dfs(1,-1);
	makebridge();
	for(ll i=0;i<300010;i++)
	{
		vis[i]=false;
	}
   ///cout<<temp;
      dfs1(temp,0);
      ////cout<<pos;
      //cout<<maxcount;
      ///maxcount=-1e9;
     for(ll i=0;i<300010;i++)
	{
		vis[i]=false;
	}
      dfs1(pos,0);
     cout<<maxcount;
return 0;    
}
