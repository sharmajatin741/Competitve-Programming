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
vector<vi> a(10005);
ll d[10005];
void dfs(ll node,ll p,ll level)
{
  d[node]=level;
  for(auto x:a[node])
  {
    if(x!=p)
      dfs(x,node,level+1);
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 // freopen("input.txt", "r", stdin);
  ll n;
  cin>>n;
  forn(i,n-1)
  {
    ll x,y;
    cin>>x>>y;
    a[x].pb(y);
    a[y].pb(x);
  }
  dfs(1,-1,0);
  ll p;
  ll maxi=-1e5;
  forn(i,10005)
  {
      if(d[i]>maxi)
      {
        maxi=d[i];
        p=i;
      }      
  }
  forn(i,10005) d[i]=0;
  dfs(p,-1,0);
  maxi=-1e5;
  forn(i,10005) maxi=max(maxi,d[i]);
  cout<<maxi;
return 0;
}       