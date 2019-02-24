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
  ll n,a,b;
  cin>>n>>a>>b;
  ll mini=min(a,b);
   ll v[n];
  forn(i,n)
  {
    cin>>v[i];
  }
  ll ans=0;
  forn(i,n)
  {
    if(v[i]==2)
    {
      if(v[n-i-1]!=2)
      {
         if(v[n-i-1]==1) ans+=b;
         else ans+=a;
         v[i]=v[n-i-1];
      }
      else{
        ans+=mini;
        if(a==mini) v[i]=0;
        else v[i]=1;
      } 
    }
    else{
      if(v[n-i-1]!=2&&v[i]!=v[n-i-1])
      {
        cout<<-1;
        return 0;
      }
    }
  }
  cout<<ans;
  return 0;
}
