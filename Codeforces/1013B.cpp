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
int main()
{ 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //freopen("input.txt", "r", stdin);
  ll n,x;
  cin>>n>>x;
  map<ll,ll> ma;
  ll a[n];
  forn(i,n)
  {
    cin>>a[i];
    ma[a[i]]++;
  }
  for(auto x:ma)
  {
    if(x.se>1)
    {
      cout<<"0";
      return 0;
    }
  }
  ll ans=-1;
  forn(i,n)
  {
    ma[a[i]]--;
    ll o=(a[i]&x);
    if(ma[o]>0)
    {
      cout<<"1";
      return 0;
    }
    ma[a[i]]++;
  }
  forn(i,n) a[i]=a[i]&x;
  map<ll,ll> md;
  forn(i,n) md[a[i]]++;
  for(auto c:md)
  {
    if(c.se>1)
    {
      cout<<"2";
      return 0;
    }
  }
  cout<<ans;
  return 0;
}
