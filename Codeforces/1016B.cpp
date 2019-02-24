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
ll n,m,q;
cin>>n>>m>>q;
st s,t;
cin>>s>>t;
vector<pii> a;
for(ll i=0;i<n-m+1;i++)
{
  ll k=0;
  bool f=true;
  for(ll j=i;j<n&&k<m;j++,k++)
  {
    if(s[j]!=t[k])
    {
      f=false;
    }
  }
  if(f)
  {
    a.pb({i,i+m-1});
  }
}
//for(auto x:a) cout<<x.fi<<" "<<x.se<<"\n";
while(q--)
{
  ll l,r;
  cin>>l>>r;
  l--;
  r--;
  ll ans=0;
  for(auto x:a)
  {
    if(x.fi>=l&&x.se<=r)
    ans++;
  }
  cout<<ans<<"\n";
}
return 0;
}
