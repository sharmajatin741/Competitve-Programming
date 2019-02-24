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
vi o[1001];
bool vis[1001][1001];
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      #endif
      ll n,m;
      cin>>n>>m;
      ll a[n][m];
      forn(i,n) forn(j,m) cin>>a[i][j];
      vector<pair<ll,pii>> wo;
      forn(i,n) forn(j,m) wo.pb({a[i][j],{i,j}});
      sort(rall(wo));
      forn(i,(ll)wo.size())
      {
         ll x=wo[i].se.fi;
         ll y=wo[i].se.se;
         for(auto y1:o[x])
         {
            ll y2=y1;
            ll y3=y;
            if(y2>y3) swap(y2,y3);
            if(vis[y2][y3])
            {
              cout<<wo[i].fi;
              return 0;
            }
            vis[y2][y3]=true;
         }
         o[x].pb(y);
      }
}
