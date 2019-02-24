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
const ll N=500010;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll n;
  cin>>n;
  ll a[n];
  forn(i,n) cin>>a[i];
  vector<pii> v(n);
  forn(i,n) v[i]={a[i],i};
  sort(all(v));
  ll b[n];
  ll k=1;
  forn(i,n)
  {
    ll x=v[i].fi;
    ll left=n-x;
    ll cnt=0;
    ll j=i;
    while(v[j].fi==x&&j<n)
    {
      b[v[j].se]=k;
      cnt++;  
      if(cnt==left)
      {
        cnt=0;
        if(j+1)
        if(j+1<n)
        left=n-v[j+1].fi;
        k++;
      }    
      j++;
    }
    if(cnt!=0)
    {
      cout<<"Impossible\n";
      return 0;
    }
    i=j-1;
  }
  cout<<"Possible\n";
  forn(i,n) cout<<b[i]<<" ";
} 
//nothing is impossible
