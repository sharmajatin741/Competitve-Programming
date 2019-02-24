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
  ll n,k;
  cin>>n>>k;
  ll a[n+1],b[n+1];
  for1(i,n) cin>>a[i];
  for1(i,n) cin>>b[i];
  ll pref[n+1]={0};
  ll pref1[n+1]={0};
  for1(i,n)
  {
    pref[i]=pref[i-1]+a[i]*b[i];
    pref1[i]=pref1[i-1]+a[i];    
  }
  ll ans=0;
  for(ll i=1;i<=n-k+1;i++)
  {
    ll l=i;
    ll r=i+k-1;
    ll t=pref[l-1]+pref[n]-pref[r]+pref1[r]-pref1[l-1];
    ans=max(ans,t);
  }
  cout<<ans;
}
// Your limitation—it’s only your imagination
