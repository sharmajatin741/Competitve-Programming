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
ll dp[N];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll r,g;;
  cin>>r>>g;
  if(r>g) swap(r,g);
  ll tot=r+g;
  ll n;
  for(ll i=1;;i++)
  {
    ll s=i*(i+1)/2;
    if(s>tot){
      n=i-1;
      break;
    }
  }
  dp[0]=1;
  for(ll i=1;i<=n;i++)
  {
    for(ll j=r;j>=i;j--)
    {
      dp[j]+=dp[j-i];
      if(dp[j]>=MOD) dp[j]-=MOD;
    }
  }
  ll s=n*(n+1)/2;
  ll ans=0;
  for(ll i=r;i>=0;i--)
  {
    if(s-i<=g){
      ans+=dp[i];
      ans%=MOD;
    }
  }
  cout<<ans;
} 
// Never give up, and be confident in what you do. There may be tough times, but the difficulties which you face will make you more determined to achieve your objectives and to win against all the odds
// O Krishna, the mind is restless
