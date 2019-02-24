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
template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }                                                                                   
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}             
const ll N=300005;
vi a[N];
vector<pii> qu[N];
ll add[N];
ll ans[N];
void dfs(ll node,ll p=0,ll height=0,ll sum=0)
{
  for(auto x:qu[node])
  {
    ll l=height;
    ll r=l+x.fi;
    add[l]+=x.se;
    if(r+1<N) add[r+1]-=x.se;
  }
  sum+=add[height];
  ans[node]=sum;
  for(auto x:a[node])
  {
    if(x!=p) dfs(x,node,height+1,sum);
  }
  for(auto x:qu[node])
  {
    ll l=height;
    ll r=l+x.fi;
    add[l]-=x.se;
    if(r+1<N) add[r+1]+=x.se;
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
  forn(i,n-1)
  {
    ll x,y;
    cin>>x>>y;
    a[x].pb(y);
    a[y].pb(x);
  }
  ll q;
  cin>>q;
  while(q--)
  {
    ll v,d,x;
    cin>>v>>d>>x;
    qu[v].pb({d,x});
  }
  dfs(1);
  for1(i,n) cout<<ans[i]<<" ";
} 
//nothing is impossible
