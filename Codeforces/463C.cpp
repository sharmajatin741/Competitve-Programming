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
 // freopen("input.txt", "r", stdin);
  cin>>n;
  forn(i,n) forn(j,n) cin>>a[i][j],o[i+j]+=a[i][j],oo[i-j+n-1]+=a[i][j];
  ll pos1x,pos1y,pos2x,pos2y;
  ll val1=0,val2=0;
  forn(i,n) forn(j,n)
  {
    if((i+j)&1)
    {
      if(get(i,j)>=val1)
      {
        val1=get(i,j);
        pos1x=i;
        pos1y=j;
      }
    }
    else{
      if(get(i,j)>=val2)
      {
        val2=get(i,j);
        pos2x=i;
        pos2y=j;
      }
    }
  }
  cout<<val1+val2<<"\n"<<pos1x+1<<" "<<pos1y+1<<" "<<pos2x+1<<" "<<pos2y+1;
  return 0;
}
