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
long double cal(ll a,ll b)
{
  long double p=2*(a+b);
  long double s=a*b;
  long double ans=p*p/s;
  return ans;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //freopen("input.txt", "r", stdin);
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    ll a[n];
    map<ll,ll> ma;
    forn(i,n) cin>>a[i],ma[a[i]]++;
    vi foo;
    pii pi;
    for(auto x:ma)
    {
      if(x.se>=2)
      {
          if(x.se>=4) foo.pb(x.fi);
          foo.pb(x.fi);
      }
    }
    sort(all(foo));
    long double min=1e9;
    for(ll i=1;i<foo.size();i++)
    {
      if(cal(foo[i],foo[i-1])<min)
      {
        min=cal(foo[i],foo[i-1]);
        pi={foo[i],foo[i-1]};
      }
    }
    cout<<pi.fi<<" "<<pi.fi<<" "<<pi.se<<" "<<pi.se<<"\n"; 
  }
  return 0;
}
