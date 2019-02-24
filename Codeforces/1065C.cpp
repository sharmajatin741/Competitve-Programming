/* nothing is impossible */
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
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll n,k;
  cin>>n>>k;
  ll a[n];
  ll maxi=-1;
  ll mini=1e13;
  forn(i,n) cin>>a[i],maxi=max(a[i],maxi),mini=min(a[i],mini);
  ll x[maxi+1]={0};
  forn(i,n)
  {
    x[1]++;
    x[a[i]]--;
  }
  for(ll i=2;i<=maxi;i++)
  {
    x[i]+=x[i-1];
  }
  ll ans=0;
  ll cnt=0;
  for(ll i=maxi-1;i>=mini;i--)
  {
    if(cnt+x[i]>k)
    {
      ans++;
      cnt=x[i];
    }
    else cnt+=x[i];
  }
  if(cnt!=0) ans++;
  cout<<ans;
  return 0;   
}
