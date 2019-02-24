#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define PI 3.14159265358979323846
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pii;
typedef long double ld;
typedef string st;
const ll MOD = 1e9 + 7 ;
const ll INF=1e14;
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
const ll N=500020;
ll a[N];
ll seg[N][22];
bool lz[N][22];
void build(ll u,ll l,ll r,ll nb)
{
  if(l==r)
  {
    seg[u][nb]=((a[l]>>nb)&1);
  }
  else{
    ll mid=(l+r)/2;
    build(2*u,l,mid,nb);
    build(2*u+1,mid+1,r,nb);
    seg[u][nb]=seg[2*u][nb]+seg[2*u+1][nb];
  }
}
void push(ll u,ll l,ll r,ll mid,ll nb)
{
  if(!lz[u][nb]) return ;
  lz[2*u][nb]=!lz[2*u][nb];
  lz[2*u+1][nb]=!lz[2*u+1][nb];
  seg[2*u][nb]=(mid-l+1)-seg[2*u][nb];  
  seg[2*u+1][nb]=(r-(mid+1)+1)-seg[2*u+1][nb];
  lz[u][nb]=false; 
}
void update(ll u,ll l,ll r,ll i,ll j,ll nb)
{
  if(l>=i&&r<=j)
  {
    lz[u][nb]=!lz[u][nb];
    seg[u][nb]=(r-l+1)-seg[u][nb];
    return ;
  }
  if(l>j||r<i) return;
  ll mid=(l+r)/2;
  push(u,l,r,mid,nb);
  update(2*u,l,mid,i,j,nb);
  update(2*u+1,mid+1,r,i,j,nb);
  seg[u][nb]=seg[2*u][nb]+seg[2*u+1][nb];  
}
ll get(ll u,ll l,ll r,ll i,ll j,ll nb)
{
  if(l>=i&&r<=j){ return seg[u][nb]; }
  if(l>j||r<i) return 0;
  ll mid=(l+r)/2;
  push(u,l,r,mid,nb);
  return (get(2*u,l,mid,i,j,nb)+get(2*u+1,mid+1,r,i,j,nb));
}
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      #endif
      ll n;
      cin>>n;
      forn(i,n) cin>>a[i];
      for(ll i=0;i<=21;i++)
        build(1,0,n-1,i);
      ll q;
      cin>>q;
      while(q--)
      {
        ll in;
        cin>>in;
        ll l,r;
        cin>>l>>r;
        if(in==1)
        {
          ll ans=0;
          for(ll i=0;i<=21;i++) ans+=(get(1,0,n-1,l-1,r-1,i)*(1LL<<i));
          cout<<ans<<"\n";
        }
        else{
          ll x;
          cin>>x;
          for(ll i=0;i<=21;i++)
          {
            if(x&(1LL<<i))
            {
             update(1,0,n-1,l-1,r-1,i);
            }
          }
        }
      }
}
// I never lose. I either win or I learn
