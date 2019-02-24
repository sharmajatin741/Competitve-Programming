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
const ll N=200002;
ll a[4*N][5];
ll seg[4*N][32];
ll n,k;
void build(ll node,ll l,ll r)
{
  if(l==r){
        for(ll i=0;i<(1<<k);i++)
          for(ll j=0;j<k;j++)
            if(i&(1<<j)) seg[node][i]+=a[l][j];
            else seg[node][i]-=a[l][j];
  }
  else{
    ll mid=(l+r)/2;
    build(2*node,l,mid);
    build(2*node+1,mid+1,r);
    for(ll i=0;i<(1<<k);i++)  seg[node][i]=min(seg[2*node][i],seg[2*node+1][i]);
  }
}
void update(ll node,ll z,ll l,ll r)
{
  if(l==r){
        for(ll i=0;i<(1<<k);i++)
          for(ll j=0;j<k;j++)
           seg[node][i]=0;
        for(ll i=0;i<(1<<k);i++)
          for(ll j=0;j<k;j++)
            if(i&(1<<j)) seg[node][i]+=a[l][j];
            else seg[node][i]-=a[l][j];
  }
  else{
    ll mid=(l+r)/2;
    if(z<=mid) update(2*node,z,l,mid);
    else update(2*node+1,z,mid+1,r);
    for(ll i=0;i<(1<<k);i++)  seg[node][i]=min(seg[2*node][i],seg[2*node+1][i]);
  } 
}
ll query(ll node,ll x,ll y,ll l,ll r,ll inx)
{
  if(y<l||x>r) return 1e10;
  if(x<=l&&y>=r) return seg[node][inx];
  ll mid=(l+r)/2;
  return min(query(2*node,x,y,l,mid,inx),query(2*node+1,x,y,mid+1,r,inx));
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  cin>>n>>k;
  forn(i,n)
  {
    forn(j,k)
    {
      cin>>a[i][j];
    }
  }
  build(1,0,n-1);
  ll q;
  cin>>q;
  while(q--)
  {
    ll v;
    cin>>v;
    if(v==1)
    {
      ll in;
      cin>>in;
      in--;
      forn(i,k) cin>>a[in][i];
      update(1,in,0,n-1);
    }
    else{
       ll x,y;
       cin>>x>>y;
       x--; y--;
       ll ans=0;
       for(ll i=0;i<(1<<(k-1));i++)
       ans=max(ans,abs(query(1,x,y,0,n-1,i)+query(1,x,y,0,n-1,((1<<k)-1)^i)));
       cout<<ans<<"\n";
    }
  }  
} 
//nothing is impossible
