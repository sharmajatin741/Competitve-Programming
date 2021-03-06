#include <bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
using namespace std;
typedef int ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pii;
typedef long double ld;
typedef string st;
const ll MOD = 1e9 + 7 ;
//const ll INF=1e14;
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
const ll N=200005;
vi a[N],g[N];
ll c[N],v[N],ans;
ll dfs(ll u)
{
  v[u]=0;
  ll m=1;
  for(auto x:a[u])
  {
    if(v[x])
    {
      ll c=dfs(x);
      ans=max(m+c,ans);
      m=max(m,c+1);
    } 
  }
  ans=max(ans,1);
  return m;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll n;
  cin>>n;
  for1(i,n) cin>>c[i];
  forn(i,n-1){
    ll x,y;
    cin>>x>>y;
    a[x].pb(y);
    a[y].pb(x);
  }
  for1(i,n)
  {
    ll x=c[i];
    for(ll j=1;j*j<=x;j++)
    {
      if(x%j) continue;
      g[j].pb(i);
      g[x/j].pb(i);
    }
  }
  for(ll i=2;i<200000;i++)
  {
    for(auto x:g[i]) v[x]=1;
    for(auto x:g[i]) if(v[x]) dfs(x);
  }
  cout<<ans;
} 
// O Krishna, the mind is restless
