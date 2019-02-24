/* nothing is impossible */
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
const ll N=1000006;
bool f[N];
map<ll,ll> da;
ll a[N];
ll n,m,d;
ll b[N];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  cin>>n>>m>>d;
  forn(i,n) cin>>a[i],b[i]=a[i];
  sort(a,a+n);
  ll cnt=0;
  for(ll i=0;i<n;i++)
  {
    if(!f[i])
    {
      da[a[i]]=cnt;
      ll k=i;
      f[i]=true;
      ll r=a[i];
      while(k<n)
      {
        ll p=upper_bound(a,a+n,r+d)-a;
        ll j;
        for(j=p;j<n;j++)
        {
          if(f[j]==false)
          {
             f[j]=true;
             da[a[j]]=cnt;
             r=a[j];
             p=j;
             break;
          }
        }
        k=j;
      }
    cnt++;
    }
  }
  cout<<cnt<<"\n";
  forn(i,n)
  {
    cout<<da[b[i]]+1<<" ";
  }
  return 0;
}
