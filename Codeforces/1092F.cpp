#include <bits/stdc++.h>
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define fi first
#define se second
#define ff first
#define ss second
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
typedef long double ld;
typedef string st;
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD = 1e9 + 7 ;
const ll INF=1e14;
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
const ll N=1000002;
vi a[N];
ll dis[N];
ll s[N];
ll ans[N];
ll an[N];
void dfs(ll u,ll p=-1,ll d=0)
{
  dis[u]=d;
  s[u]=an[u];
  for(auto x:a[u])
  {
    if(x!=p)
    {
     dfs(x,u,d+1);
     s[u]+=s[x];
    }
  }
}
void dfs1(ll u,ll p=-1)
{
  for(auto x:a[u])
  {
    if(x!=p)
    {
   //   cout<<x<<" ";
     ans[x]=ans[u]-s[x]+s[1]-s[x];
     dfs1(x,u);
    }
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll n;
  cin>>n;
  for1(i,n) cin>>an[i];
  forn(i,n-1)
  {
    ll x,y;
    cin>>x>>y;
    a[x].pb(y);
    a[y].pb(x);
  }
  dfs(1);
  for1(i,n) ans[1]+=dis[i]*an[i];
  dfs1(1);
  //for1(i,n) cout<<ans[i]<<" ";
  cout<<*max_element(ans,ans+N);
} 
//nothing is impossible
