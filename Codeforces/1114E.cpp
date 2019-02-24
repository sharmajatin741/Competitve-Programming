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
mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
const ll N=505;
ll ask(ll n)
{
  cout<<"> "<<n<<endl;
  ll x;
  cin>>x;
  return x;
}
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      #endif
      ll n;
      cin>>n;
      ll l=0,r=1e9;
      ll cnt=0;
      while(l<r)
      {
        ll mid=(l+r)/2;
        ll val=ask(mid);
        cnt++;
        if(val==1) l=mid+1;
        else r=mid; 
      }
      ll left=60-cnt;
      vector<ll> v;
      while(left--)
      {
        int in=rng32()%n;
        cout<<"? "<<in+1<<endl;
        ll x;
        cin>>x;
        v.pb(x);
      }
      sort(all(v));
      if(v.back()!=l) v.pb(l);
      ll ans=0;
      forn(i,(ll)v.size()-1)
      {
        ans=__gcd(ans,v[i+1]-v[i]);
      }
      forn(i,(ll)v.size())
      {
        forn(j,i-1)
        {
          ans=__gcd(ans,v[i]-v[j]);
        }
      }
      cout<<"! "<<l-ans*(n-1)<<" "<<ans<<endl;
}
/* You are confined only by the walls you build yourself */
