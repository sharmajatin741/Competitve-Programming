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
typedef long double ld;
typedef string st;
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD = 1e9 + 7 ;
const ll INF=1e14;                                                                                           
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}             
const ll N=100005;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 // freopen("input.txt", "r", stdin);
  ll n;
  cin>>n;
  ll s1=0,s2=0,cnt1=0,cnt2=0;
  for(ll i=2;i<=n;i+=2)
    s1+=i,cnt1++;
  for(ll i=1;i<=n;i+=2)
    s2+=i,cnt2++;
  if(__gcd(s1,s2)>1)
  {
    cout<<"Yes\n";
    cout<<cnt1<<" ";
    for(ll i=2;i<=n;i+=2)
    cout<<i<<" ";
    cout<<"\n";
    cout<<cnt2<<" ";
    for(ll i=1;i<=n;i+=2)
    cout<<i<<" ";
    cout<<"\n";
  }
  else cout<<"No";
  return 0;
}
