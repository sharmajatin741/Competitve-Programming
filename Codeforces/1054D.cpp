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
const ll N=100005;
ll f(ll n)
{
  return (n*(n-1)/2);
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll n,k;
  cin>>n>>k;
  k=(1<<k)-1;
  ll ans=f(n+1);
  map<ll,ll> ma;
  ll s=0;
  ma[0]=1;
  forn(i,n)
  {
    ll x;
    cin>>x;
    x=x^s;
    ll y=x^k;
    if(ma[x]<=ma[y])
    {
      ma[x]++;
    }
    else ma[y]++;
    s=x;
  }
  for(auto x:ma){ ans-=f(x.se);
   //if(x.fi==0) ans-=x.se;
  }
  cout<<ans;
}
//ALL LOSSES IN THIS WORLD ARE DUE TO A LACK OF ABILITY. IF YOU WANT TO CURSE SOMETHING, CURSE YOUR OWN WEAKNESS
//nothing is impossible
