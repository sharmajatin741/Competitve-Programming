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
ll a[27];
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
ll n;
cin>>n;
st s,t;
cin>>s>>t;
forn(i,s.length())
{
  a[s[i]-'a']++;
}
forn(i,t.length())
{
  a[t[i]-'a']--;
}
forn(i,26)
{
  if(a[i]<0||a[i]>0)
  {
    cout<<"-1";
    return 0;
  }
}
vi ans;
ll d[s.length()];
vector<vi> f(27);
ford(i,t.length())
{
  f[t[i]-'a'].pb(i);
}
forn(i,s.length())
{
  d[i]=f[s[i]-'a'].back();
  f[s[i]-'a'].pop_back();
}
//for(auto x:d) cout<<x<<" ";
forn(i,s.length())
{
  for(ll j=0;j<s.length();j++)
  {
    if(d[j+1]<d[j])
    {
      ans.pb(j);
     ll te=d[j+1];
     d[j+1]=d[j];
     d[j]=te;
    }
  }
}
if(ans.size()>10000)
{
  cout<<"-1";
  return 0;
}
cout<<ans.size()<<"\n";
for(auto x:ans) cout<<x+1<<" ";
return 0;
}
