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
const ll N=400055;
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
      sort(a,a+n);
      ll s=0;
      forn(i,n) s+=a[i];
      ll ans=s;
      for(ll i=n-1;i>=1;i--)
      {
        ll x=a[i];
        for(ll j=2;j*j<=x;j++)
        {
          if(x%j==0)
          {
            ans=min(ans,s-x-a[0]+x/j+a[0]*j);
            if(x/j!=j)
            {
            ans=min(ans,s-x-a[0]+j+a[0]*(x/j));              
            }
          }
        }
      }
      ll x=a[0];
        for(ll j=2;j*j<=x;j++)
        {
          if(x%j==0)
          {
            ans=min(ans,s-x-a[1]+x/j+a[1]*j);
            if(x/j!=j)
            {
            ans=min(ans,s-x-a[1]+j+a[1]*(x/j));              
            }
          }
        }
      cout<<ans;
}
/* If today were the last day of my life,would I want to do what I'm about to do today? */
