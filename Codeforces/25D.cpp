/* You are confined only by the walls you build yourself */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define PI 3.14159265358979323846
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pii;
typedef long double ld;
typedef string st;
const ll MOD = 1e9 + 7 ;
const ll INF=1e14;
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
const ll N=100020;
vi a[1002];
ll pa[1002];
ll find(ll x)
{
  while(x!=pa[x]) x=pa[x];
  return x;
}
bool unite(ll x,ll y)
{
  x=find(x); y=find(y);
  if(x==y) return false;
  srand(time(NULL));
  if(rand()&1) swap(x,y);
  pa[x]=y;
  return true;
}
bool vis[1002];
void dfs(ll u)
{
  if(vis[u]) return;
  vis[u]=true;
  for(ll x:a[u]) dfs(x);
}
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      #endif
      ll n;
      cin>>n;
      forn(i,n) pa[i]=i;
      vector<pii> ed;
      forn(i,n-1){
        ll x,y;
        cin>>x>>y;
        if(!unite(x,y))
        {
          ed.pb({x,y});
        }
        a[x].pb(y);
        a[y].pb(x);
      }
      vector<ll> an;
      for(int i=1;i<=n;i++)
      {
        if(!vis[i])
        {
         // cout<<i<<" ";
          dfs(i);
          an.pb(i);
        }
      }
      //return 0;
      ll k=0;
      cout<<(ll)an.size()-1<<'\n';
      for(ll i=0;i<(ll)an.size()-1;i++)
      {
        cout<<ed[k].fi<<" "<<ed[k].se<<" "<<an[i]<<" "<<an[i+1]<<"\n";
        k++;
      }
}
