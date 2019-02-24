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
ll c[222222];
ll x[222222],y[222222];
set<ll> s[222222];
bool f[222222];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 /// freopen("input.txt", "r", stdin);
  ll n,m;
  cin>>n>>m;
  for1(i,n) cin>>c[i],f[c[i]]=true;
  forn(i,m) cin>>x[i]>>y[i];
  forn(i,m)
  {
    if(c[x[i]]!=c[y[i]])
    {
     s[c[x[i]]].insert(c[y[i]]);
     s[c[y[i]]].insert(c[x[i]]);
    }
  }
  ll big=0;
  for1(i,100005) if(f[i]) big=max(big,1ll*s[i].size());
  for1(i,100005)
  {
    if(f[i]){
      if(s[i].size()==big)
      {
        cout<<i;
        return 0;
      }
    }
  }
  return 0;
}
