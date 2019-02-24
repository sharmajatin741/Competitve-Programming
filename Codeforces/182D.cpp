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
  st a,b;
  cin>>a>>b;
  st s="";
  if(b.length()<a.length())
    swap(a,b);
  ll n1=a.length();
  ll n2=b.length();
  ll ans=0;
  forn(i,a.length())
  {
    s+=a[i];
    bool f=true;
    ll k=s.length();
    if((n1%k)||(n2%k))
    {
      f=false;
    }
    if(!f) continue;
    //cout<<s<<" ";
    ll o=n1/k;
    ll p=n2/k;
    st y="",r="";
    y="";
    r="";
    forn(j,o) y+=s;
    forn(j,p) r+=s;
   // cout<<y<<" "<<r<<"\n";
    if(y==a&&r==b)
    {
      ans++;
    }
  }
  cout<<ans;
  return 0;
}
