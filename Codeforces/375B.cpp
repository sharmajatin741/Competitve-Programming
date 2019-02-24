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
const ll N=200005;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll n,m;
  cin>>n>>m;
  st a[n];
  forn(i,n) cin>>a[i];
  ll ro[n][m+1];
  forn(i,n) forn(j,m+1) ro[i][j]=0;
  for(ll i=0;i<n;i++)
  {
    for(ll j=m-1;j>=0;j--)
    {
      ro[i][j]=(a[i][j]=='1'?(ro[i][j+1]+1):0);
    }
  }  
  ll ans=0;
  forn(j,m)
  {
    ll wo[n];
    forn(i,n) wo[i]=ro[i][j];
    sort(wo,wo+n);
    forn(i,n)
    {
      ans=max(ans,wo[i]*(n-i));
    }
  }
  cout<<ans;
}
// I find that the harder I work, the more luck I seem to have
