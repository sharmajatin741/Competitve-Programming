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
      ll n,k;
      cin>>n>>k;
      ll a[n],b[k];
      forn(i,n) cin>>a[i];
      forn(i,k) cin>>b[i];
      sort(b,b+k);
      reverse(b,b+k);
      ll p=0;
      for(ll i=0;i<n;i++)
      {
      	if(a[i]==0)
      	{
          a[i]=b[p++];
      	}
      }
      bool f=false;
      for(ll i=1;i<n;i++)
      {
      	if(a[i]<a[i-1]) f=true;
      }
      if(f) cout<<"YES\n";
      else cout<<"NO\n";
}
/* If today were the last day of my life,would I want to do what I'm about to do today? */
