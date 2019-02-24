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
const ll N=1000000;
ll sum(ll n)
{
  ll res=0;
  while(n)
  {
    res+=n%10;
    n/=10;
  }
  return res;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  vi ans;
  forn(i,10) forn(j,10) forn(k,10) forn(l,10) forn(m,10) forn(n,10) forn(o,10) forn(p,10){
    if(i+j+k+l+m+n+o+p==10)
    {
      ans.pb(p+o*10+n*100+m*1000+l*10000+k*100000+j*1000000+i*10000000);
    }
  }   
  sort(all(ans));
  ll k;
  cin>>k;
  k--;
  cout<<ans[k];
  return 0;
}
