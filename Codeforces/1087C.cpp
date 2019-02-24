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
const ll N=500002;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll x[3],y[3];
  forn(i,3) cin>>x[i]>>y[i];
  ll min=1e12;
  ll x1,y1;
  for(ll i=0;i<=1000;i++)
  {
    for(ll j=0;j<=1000;j++)
    {
      ll dis=0;
      for(ll k=0;k<3;k++)
      {
        dis+=abs(i-x[k])+abs(j-y[k]);
      }
      if(dis<min)
      {
        min=dis;
        x1=i; y1=j;
      }
    }
  }
//  cout<<x1<<" "<<y1<<"\n";
 // return 0;
  set<pii> ans;
  for(ll i=0;i<3;i++)
  {
    ans.insert({x[i],y[i]});
    ll x2=x1;
    ll y2=y1;
    while(x2!=x[i])
    {
      ans.insert({x2,y2});
      if(x2>x[i]) x2--;
      else x2++;
    }
    while(y2!=y[i])
    {
      ans.insert({x2,y2});
      if(y2>y[i]) y2--;
      else y2++;
    }
  }
  cout<<ans.size()<<"\n";
  for(auto x:ans) cout<<x.fi<<" "<<x.se<<"\n";
} 
//nothing is impossible
