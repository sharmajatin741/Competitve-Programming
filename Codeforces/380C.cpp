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
const ll N=1000002;
ll seg[4*N+10][3];
st s;
void build(ll node,ll l,ll r)
{
  if(l==r)
  {
    if(s[l]=='(') seg[node][1]++;
    else seg[node][2]++;
  }
  else{
    ll m=(l+r)/2;
    build(2*node,l,m);
    build(2*node+1,m+1,r);
    ll k=min(seg[2*node][1],seg[2*node+1][2]);
    seg[node][0]=seg[2*node][0]+seg[2*node+1][0]+k;
    seg[node][1]=seg[2*node][1]+seg[2*node+1][1]-k;
    seg[node][2]=seg[2*node][2]+seg[2*node+1][2]-k;
  }
}
pair<ll,pii> query(ll node,ll l,ll r,ll x,ll y)
{
  if(x>r||y<l) return {0,{0,0}};
  if(x<=l&&y>=r) return {seg[node][0],{seg[node][1],seg[node][2]}};
  ll mid=(l+r)/2;
  pair<ll,pii> e1=query(2*node,l,mid,x,y);
  pair<ll,pii> e2=query(2*node+1,mid+1,r,x,y);
  ll t=min(e1.se.fi,e2.se.se);
  ll a=e1.fi+e2.fi+t;
  ll b=e1.se.fi+e2.se.fi-t;
  ll c=e1.se.se+e2.se.se-t;
  return {a,{b,c}};
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  cin>>s;
  ll n=s.length();
  build(1,0,n-1);
  ll q;
  cin>>q;
  while(q--)
  {
    ll l,r;
    cin>>l>>r;
    l--; r--;
    cout<<2*(query(1,0,n-1,l,r).fi)<<"\n";
  }
} 
// cool down boy
//nothing is impossible
