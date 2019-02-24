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
ll a[2222][2222],o[4444],oo[4444];
ll n;
ll get(ll i,ll j)
{
  return o[i+j]+oo[i-j+n-1]-a[i][j];
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //freopen("input.txt", "r", stdin);
  ll n;
  cin>>n;
  forn(i,7)
  {
    ll k=n-4*i;
    if(k>=0&&k%7==0)
    {
      forn(j,i) cout<<"4";
      forn(j,k/7) cout<<"7";
      return 0;
    }
  }
  cout<<"-1";
  return 0;
}
