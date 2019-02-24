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
const ll N=51;
ll bcnt(ll n)
{
  ll s=0;
  while(n)
  {
    s+=(n&1);
    n>>=1;
  }
  return s;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll n,k;
  cin>>n>>k;
  ll s=0;
  ll a[n];
  forn(i,n) cin>>a[i],s+=a[i];
  if(s%k!=0)
  {
    cout<<"No\n";
    return 0;
  }
  s=s/k;
  ll so=0;
  ll cnt=0;
  vi ans;
  for(ll i=0;i<n;i++)
  {
     so+=a[i];
     cnt++;
     if(so==s)
     {
       ans.pb(cnt);
       so=0;
       cnt=0;
     }
  }
  if(ans.size()!=k)
  {
    cout<<"No";
    return 0;
  }
    cout<<"Yes\n";
    for(auto x:ans) cout<<x<<" ";
}
//ALL LOSSES IN THIS WORLD ARE DUE TO A LACK OF ABILITY. IF YOU WANT TO CURSE SOMETHING, CURSE YOUR OWN WEAKNESS
//nothing is impossible
