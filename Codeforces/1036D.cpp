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
//  freopen("input.txt", "r", stdin);
  ll n;
  cin>>n;
  ll a[n];
  forn(i,n) cin>>a[i];
  ll m;
  cin>>m;
  ll b[m];
  forn(i,m) cin>>b[i];
  ll ptr1=0;
  ll ptr2=0;
  ll ans=0;
  ll s1=a[0];
  ll s2=b[0];
  while(ptr1<n&&ptr2<m)
  {
    if(s1==s2)
    {
      ans++;
      ptr1++;
      ptr2++;
      s1=a[ptr1];
      s2=b[ptr2];
    }
    else if(s1>s2)
    {
      ptr2++;
      s2+=b[ptr2];
    }
    else {
      ptr1++;
      s1+=a[ptr1];
    }
  }
  if(ptr1==n&&ptr2==m)
  cout<<ans;
  else cout<<-1;
  return 0;
}
