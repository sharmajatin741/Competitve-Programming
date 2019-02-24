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
  ll f[11];
  f[0]=1;
  for(ll i=1;i<=10;i++) f[i]=i*f[i-1];
  st a,b;
  cin>>a>>b;
  ll p=0,n=0;
  forn(i,a.length()){
    p+=(a[i]=='+');
    n+=(a[i]=='-');
  }
  ll p1=0,n1=0;
  ll cnt=0;
  forn(i,b.length())
  {
    if(b[i]=='?') cnt++;
    else if(b[i]=='+') p1++;
    else n1++;
  }
  ll p2=p-p1;
  ll n2=n-n1;
  if(p2+n2!=cnt||p2<0||n2<0)
  {
    cout<<"0.000000000\n";
    return 0;
  }
  float ans=f[cnt];
  ans=ans/f[p2];
  ans=ans/f[n2];
  ans=ans/(pow(2,cnt));
  cout<<fixed<<setprecision(9)<<ans;
  return 0;   
}
