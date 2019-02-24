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
template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }                                                                                   
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}             
const ll N=3003;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll n;
  cin>>n;
  ll a[n];
  forn(i,n) cin>>a[i];
  /*vector<pair<ll,pii>> ans;
  for(ll i=n-2;i>=0;i--)
  {
    if(a[i]>=a[i+1])
    {
      ll s=0;
      if(a[i+1]<=i)
      {
        ans.pb({1,{n,i-a[i+1]+1}});
        s+=i-a[i+1]+1;
      }
      ll o=a[i+1]+s;
      ll w=o;
      o--;
      ll j=i;
      while(j>=0)
      {
        a[j]+=s;
  //      cout<<a[j]<<" ";
        ll p=a[j]%w;
        ll r=(o-p);
        ans.pb({1,{j+1,r}});
        s+=r;
        o--;
        j--;
      }
      ans.pb({2,{i+1,w}});
      break;
    }
  }
  cout<<ans.size()<<"\n";
  for(auto x:ans)
  {
    cout<<x.fi<<" "<<x.se.fi<<" "<<x.se.se<<"\n";
  }*/
  cout<<n+1<<"\n";
  ll s=0;
  ll w=n;
  ford(i,n)
  {
    a[i]+=s;
    ll o=0;
    while((a[i]+o)%(n+1)!=w)
    {
      o++;
    }
    cout<<"1 "<<i+1<<" "<<o<<"\n";
    s+=o;
    w--;
  }
  cout<<"2 "<<n<<" "<<n+1<<"\n";
}
// (a[i]+x)%m=k  x%m=(k-a[i]%m)
// 2 3 4 1 
//nothing is impossible
