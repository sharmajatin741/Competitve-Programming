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
const ll N=500002;
struct FenwickTree {
    vector<int> bit;  // binary indexed tree
    int n;
    void init(int n) {
        this->n = n;
        bit.assign(n, 0);
    }
    int sum(int r) {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }
    void add(int idx, int delta) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] += delta;
    }
    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }
    void init(vector<int> a) {
        init(a.size());
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }
}fw1,fw2;
vi a[N];
ll start[N],last[N],c[N];
ll di[N];
ll ti=0;
void dfs(ll u=1,ll p=-1,ll d=0)
{
  start[u]=++ti;
  di[u]=d;
  for(auto x:a[u])
  {
    if(x!=p) dfs(x,u,d+1);
  }
  last[u]=ti;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll n,m;
  cin>>n>>m;
  for1(i,n) cin>>c[i];
  forn(i,n-1)
  {
    ll x,y;
    cin>>x>>y;
    a[x].pb(y);
    a[y].pb(x);
  }
  dfs();
  //for(ll i=1;i<=n;i++) cout<<start[i]<<" "<<last[i]<<"\n";
  fw1.init(N+10);
  fw2.init(N+10);
  while(m--)
  {
    ll in;
    cin>>in;
    if(in==1)
    {
      ll x,val;
      cin>>x>>val;
      if(di[x]&1)
      {
        // cout<<x<<"*\n";
         fw2.add(start[x],val);
         fw2.add(last[x]+1,-val);
         fw1.add(start[x],-val);
         fw1.add(last[x]+1,+val);
      }
      else{
        // cout<<x<<"#\n";
         fw2.add(start[x],-val);
         fw2.add(last[x]+1,val);
         fw1.add(start[x],val);
         fw1.add(last[x]+1,-val);
      }
    }
    else{
     ll x;
     cin>>x;
     if(di[x]&1)
     {
       cout<<c[x]+fw2.sum(start[x])<<"\n";
     }
     else{
       cout<<c[x]+fw1.sum(start[x])<<"\n";      
     }
    }
  }
} 
//nothing is impossible
