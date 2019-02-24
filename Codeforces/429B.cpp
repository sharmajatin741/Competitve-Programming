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
//const ll INF=1e14;
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
const ll N=1005;
ll a[N][N],dp[4][N][N];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll n,m;
  cin>>n>>m;
  ll a[n+1][m+1];
  for1(i,n) for1(j,m) cin>>a[i][j];
  for1(i,n) for1(j,m) dp[0][i][j]=a[i][j]+max(dp[0][i-1][j],dp[0][i][j-1]);
  for1(i,n) for(ll j=m;j>=1;j--) dp[1][i][j]=a[i][j]+max(dp[1][i-1][j],dp[1][i][j+1]);
  for(ll i=n;i>=1;i--) for1(j,m) dp[2][i][j]=a[i][j]+max(dp[2][i+1][j],dp[2][i][j-1]);
  for(ll i=n;i>=1;i--) for(ll j=m;j>=1;j--) dp[3][i][j]=a[i][j]+max(dp[3][i+1][j],dp[3][i][j+1]);
  ll ans=0;
  for(ll i=2;i<=n-1;i++) for(ll j=2;j<=m-1;j++) {
    ans=max(ans,dp[0][i-1][j]+dp[3][i+1][j]+dp[2][i][j-1]+dp[1][i][j+1]);
    ans=max(ans,dp[0][i][j-1]+dp[3][i][j+1]+dp[2][i+1][j]+dp[1][i-1][j]);
  }
  cout<<ans;
} 
//nothing is impossible
