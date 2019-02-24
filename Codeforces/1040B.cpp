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
typedef long double ld;
typedef string st;
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD = 1e9 + 7 ;
const ll INF=1e14;                                                                                           
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}             
const ll N=100005;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 // freopen("input.txt", "r", stdin);
  ll n,k;
  cin>>n>>k;
  if(k>=n/2)
  {
    cout<<1<<"\n"<<n/2+1;
    return 0;
  }
  ll o=2*k+1;
  ll p=k+1;
  if(n%o==0)
  {
     vi ans;
     for(ll i=k;i<n;i+=2*k+1)
     {
      ans.pb(i);
     }
     cout<<ans.size()<<"\n";
     for(auto x:ans) cout<<x+1<<" ";
  }
  else{
    ll t=n%o;
    if(t>=p)
    {
      vi ans;
      for(ll i=k;i<n-t-1;i+=2*k+1)
      {
        ans.pb(i);
      }
      ll u=n-(t-p)-1;
      ans.pb(u);
      cout<<ans.size()<<"\n";
      for(auto x:ans) cout<<x+1<<" ";
    }
    else{
      ll r=n/(o);
      r=r-1;
      if(r==0)
      {
        ll u=n;
        u-=k+1;
        vi ans;
        ans.pb(1);
        u-=k;
        ans.pb(n-u+1);
        cout<<ans.size()<<"\n";
        for(auto x:ans) cout<<x<<" ";
      }
      else{
        ll e=n%r;
        vi ans;
        ans.pb(0);
        ll y=r;
        for(ll i=2*k+1;i<n&&r;i+=2*k+1)
        {
          ans.pb(i);
          r--;
        }
        r=y;
        ll u=n-r*o;
        u-=k+1;
        u-=k;
        ans.pb(n-u);
        cout<<ans.size()<<"\n";
        for(auto x:ans) cout<<x+1<<" ";
      }
    }
  }
  return 0;
}
