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
const ll N=1002;
st s;
ll n;
bool f;
ll ans[N];
bool vis[10005][31][12];
void dfs(ll curr,ll diff,ll prev)
{
  if(f) return;
  if(curr>n)
  {
    f=true;
    cout<<"YES\n";
    for(ll i=1;i<=n;i++) cout<<ans[i]<<" ";
      return ;
  }
  else{
    if(vis[curr][diff][prev]) return ;
    vis[curr][diff][prev]=true;
    for(ll i=1;i<=10;i++)
    {
      if(s[i]=='1')
      {
        if(i==prev) continue;
        if(i<=diff) continue;
        ll o=abs(i-diff);
        ans[curr]=i;
        dfs(curr+1,o,i);
      }
    }
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  cin>>s;
  s='a'+s;
  cin>>n;
  dfs(1,0,11);
  if(!f) cout<<"NO\n";
  int y;
}
//nothing is impossible
