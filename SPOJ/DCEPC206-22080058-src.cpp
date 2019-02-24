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
const ll N=1000000;
ll fw[N];
void update(ll r,ll v)
{
  for(;r<N;r=r+(r&-r)) fw[r]+=v;
}
ll sum(ll r)
{
  ll res=0;
  for(;r>0;r-=(r&-r)) res+=fw[r];
  return res;
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
ll t;
cin>>t;
while(t--)
{
  forn(i,N) fw[i]=0;
  ll n;
  cin>>n;
  ll a[n];
  forn(i,n) cin>>a[i];
  ll ans=0;
  forn(i,n)
  {
     if(a[i]>0)
     {
      ans+=sum(a[i]-1);
      update(a[i],a[i]);
     }
  }
  cout<<ans<<"\n";
}
return 0;
}     