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
ll a[1<<18];
ll seg[1<<18];
bool build(ll node,ll l,ll r)
{
  if(r==l)
  {
    //cout<<a[l]<<" ";
    seg[node]=a[l];
    return false;
  }
  ll mid=(l+r)/2;
  //cout<<mid<<" ";
  bool f1=build(2*node,l,mid);
  bool f2=build(2*node+1,mid+1,r);
  if(f1==true)
  {
    seg[node]=seg[2*node]^seg[2*node+1];
    return false;
  } 
  else{
    seg[node]=seg[2*node]|seg[2*node+1];
    return true;
  } 
}
bool update(ll node,ll l,ll r,ll p,ll b)
{
  if(l==r)
  {
    a[p]=b;
    seg[node]=b;
    return false;
  }
  ll mid=(l+r)>>1;
  bool f1=true,f2=true;
  if(p<=mid)
  {
      f1=update(2*node,l,mid,p,b);
  }
  else{
      f2=update(2*node+1,mid+1,r,p,b);
  }
  if(f1&&f2)
  {
    seg[node]=seg[2*node]^seg[2*node+1];
    return false; 
  }
  else{
    seg[node]=seg[2*node]|seg[2*node+1];
    return true;
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 // freopen("input.txt", "r", stdin);
  ll n,m;
  cin>>n>>m;
  n=1<<n;
  for1(i,n) cin>>a[i];
  build(1,1,n);
  while(m--)
  {
    ll p,b;
    cin>>p>>b;
    update(1,1,n,p,b);
    cout<<seg[1]<<"\n";
  }
return 0;
}
