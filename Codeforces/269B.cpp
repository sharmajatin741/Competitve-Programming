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
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pii;
typedef long double ld;
typedef string st;
const ll MOD = 1e9 + 7 ;
const ll INF=1e14;
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
const ll N=200005;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll n,m,x;
  double y;
  vi o;
  cin>>n>>m;
  forn(i,n)
  {
     cin>>x>>y;
     auto p=upper_bound(all(o),x);
     if(p==o.end()) o.pb(x);
     else *p=x;
  }
  cout<<n-((ll)o.size());
} 
// Never give up, and be confident in what you do. There may be tough times, but the difficulties which you face will make you more determined to achieve your objectives and to win against all the odds
// O Krishna, the mind is restless
