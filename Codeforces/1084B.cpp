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
const ll N=50005;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll n,s;
  cin>>n>>s;
  ll a[n];
  ll sum=0;
  forn(i,n) cin>>a[i],sum+=a[i];
  if(s>sum) cout<<"-1";
  else{
    sort(a,a+n);
    ll min=1e14;
    forn(i,n) min=std::min(a[i],min);
    ll e=0;
    forn(i,n)
    {
      e+=abs(a[i]-min);
    }
    if(s<=e)
    {
      cout<<min;
    }
    else{
      s-=e;
      ll w=s/n;
      if(s%n!=0) w++;
      cout<<min-w;
    }
  }
} 
//nothing is impossible
