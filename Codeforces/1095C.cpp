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
  ll n,k;
  cin>>n>>k;
  if(k>n){
    cout<<"NO\n";
    return 0;
  }
  multiset<ll> v;
  ll m=n;
  ll f=0;
  while(m)
  {
    ll r=m%2;
    if(r==1) v.insert(f);
    f++;
    m/=2;
  }
  if(v.size()>k)
  {
    cout<<"NO\n";
    return 0;
  }
  if(v.size()==k)
  {
    cout<<"YES\n";
    for(auto x:v) cout<<(1<<x)<<" ";
    return 0;
  }
  while(v.size()!=k)
  {
    ll f=*v.rbegin();
   // cout<<f<<" *";
    v.erase(v.find(f));
    v.insert(f-1);
    v.insert(f-1);
    //for(auto x:v) cout<<x<<" ";
    //cout<<"\n";    
  }
  cout<<"YES\n";
  for(auto x:v) cout<<(1<<x)<<" ";
} 
//nothing is impossible
