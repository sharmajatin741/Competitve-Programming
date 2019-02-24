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
const ll N=300002;
vi a[N];
ll p[N];
ll vis[N];
ll mx,pi;
ll cnt=0;
ll root;
void dfs(ll u,ll d,ll r)
{
   p[u]=root;
   if(d>mx){
    mx=d;
    pi=u;
   }
   vis[u]++;
   for(auto x:a[u])
   {
     if(vis[x]==r)
     {
      dfs(x,d+1,r);
     }
   }
}
ll papa(ll u)
{
  if(u!=p[u])
  {
    p[u]=papa(p[u]);
  }
  return p[u];
}
ll ans[N];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll n,m,q;
  cin>>n>>m>>q;
  forn(i,m)
  {
    ll x,y;
    cin>>x>>y;
    a[x].pb(y);
    a[y].pb(x);
  }  
  for1(i,n)
  {
    if(vis[i]==0)
    {
      root=i;
      mx=-1; pi=-1;
      dfs(i,0,0);
      ll u=pi;
      mx=-1; pi=-1;
      dfs(u,0,1);
      ll v=pi;
      ans[root]=mx;
    }
  }
  while(q--)
  {
    ll x;
    cin>>x;
    if(x==1)
    {
      ll y;
      cin>>y;
      y=papa(y);
      cout<<ans[y]<<"\n";
    }
    else{
     ll i,j;
     cin>>i>>j;
     if (q % 7 <= 4) {
        swap(i, j);
      }
     i=papa(i);
     j=papa(j);
     if(i==j) continue;
     p[j]=i;
     ans[i]=max(max(ans[i],ans[j]),(ans[i]+1)/2+1+(ans[j]+1)/2);
    }
  }
} 
// cool down boy
//nothing is impossible
