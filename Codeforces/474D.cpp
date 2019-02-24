/* nothing is impossible */
#include <bits/stdc++.h> 
 
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
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
typedef double ld;
typedef string st;
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD = 1e9 + 7 ;
const ll INF=1e14;                                                                                                 
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}             
const ll N=300005;
ll f[N],s[N];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //freopen("input.txt", "r", stdin);
  ll n,k;
  cin>>n>>k;
  f[0]=1;
  for(ll i=1;i<N;i++)
  {
    f[i]=f[i-1];
    if(i>=k) f[i]+=f[i-k];
    if(f[i]>=MOD)
      f[i]-=MOD;
  }
  for(ll i=1;i<N;i++)
  {
    s[i]=s[i-1]+f[i];
    if(s[i]>=MOD)
      s[i]-=MOD;
  }
  while(n--)
  {
    ll x,y;
    cin>>x>>y;
    cout<<(s[y]-s[x-1]+MOD)%MOD<<"\n";
  }
return 0;
}
