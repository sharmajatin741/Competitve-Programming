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
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 // freopen("input.txt", "r", stdin);
  ll x,y,z,x1,y1,z1;
  cin>>x>>y>>z>>x1>>y1>>z1;
  ll c[6];
  forn(i,6)  cin>>c[i];
  ll ans=0;
  if(y<0) ans+=c[0];
  if(y>y1) ans+=c[1];
  if(z<0) ans+=c[2];
  if(z>z1) ans+=c[3];
  if(x<0) ans+=c[4];
  if(x>x1) ans+=c[5];
  cout<<ans;
  return 0;
}
