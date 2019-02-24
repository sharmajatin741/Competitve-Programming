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
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      #endif
      ll a[14];
      forn(i,14)
       cin>>a[i];
      ll ans=0;
      forn(i,14)
      {
        ll x=a[i];
        ll p=x/14;
        x=x%14;
        ll temp[14];
        forn(j,14) temp[j]=a[j];
        temp[i]=0;
        forn(j,14) temp[j]+=p;
        ll o=i+1;
        while(x)
        {
          o=o%14;
          temp[o]++;
          x--;
          o++;
        }
        ll cnt=0;
        forn(j,14) if(temp[j]%2==0) cnt+=temp[j];
        //forn(j,14) cout<<temp[j]<<" ";
        //cout<<cnt<<"*\n";
        ans=max(ans,cnt); 
      }
      cout<<ans;
}
/* If today were the last day of my life,would I want to do what I'm about to do today? */
