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
ll change(ll a,ll b)
{
  return min(abs(a-b),26-abs(a-b));
}
int main()
{ 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //freopen("input.txt", "r", stdin);
  ll n,p;
  st s;
  cin>>n>>p>>s;
  p--;
  ll ans=0;
  vi d,e;
  for(ll i=0;i<n/2;i++)
  {
    if(s[i]!=s[n-i-1])
    {
      ans+=change(s[i]-'a',s[n-i-1]-'a');
      d.pb(i);
      e.pb(n-i-1);
    }
  }
  if(d.size()==0)
  {
    cout<<0<<"\n";
    exit(0);
  }
  ll l=d[0];
  ll u=d[d.size()-1];
  if(p>=n/2)
    p=n-p-1;
  ll ans1=ans;
  if(p>=u)
  {
    ans1+=p-u+u-l;
  }
  else if(p<=l)
  {
    ans1+=l-p+u-l;
  }
  else{
    ans1+=min(u-p,p-l)*2+max(u-p,p-l);
  }
  cout<<ans1<<"\n";
return 0;
}
