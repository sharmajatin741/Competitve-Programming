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
const ll N=800005;
ll w[1000005],f[1000005];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll n;
  cin>>n;
  ll a[n];
  forn(i,n) cin>>a[i],w[a[i]]=1,f[a[i]]=1;
  for1(i,1000004){
    if(!w[i])
    {
     w[i]=w[i-1];
    }
    else w[i]=i;
  }
  ll ans=0;
  forn(i,1000005)
  {
    if(!f[i]) continue;
    ll x=i;
    for(ll j=2*x;(j-x)<=1000004;j+=x)
    {     
      ll p=min(1000004LL,j-1);
      ans=max(ans,w[p]%x);
    }
    //cout<<"\n";
  }
  cout<<ans;
}
//nothing is impossible
