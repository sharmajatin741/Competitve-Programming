/* You are confined only by the walls you build yourself */
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
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
const ll N=100020;
int n,m,k,sq;
ll res=0;
int a[N],pref[N],cnt[1<<21],from[N];
ll ans[N];
struct data{
  int x,y,in;
  bool operator<(const data&b) const{
  return from[x]<from[b.x]||(from[x]==from[b.x]&&y<b.y);
  }
}q[N];
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      #endif
      cin>>n>>m>>k;
      for(int i=0;i<n;i++) cin>>a[i];
      for(int i=0;i<n;i++) pref[i+1]=a[i];
      for(int i=0;i<n;i++) pref[i+1]^=pref[i];
      n++;
      sq=sqrt(n+0.1);
      for(int i=0;i<n;i++) from[i]=i/sq;
      for(int i=0;i<m;i++)
      {
        int l,r;
        cin>>l>>r;
        l--;
        q[i].x=l;
        q[i].y=r;
        q[i].in=i;
      }
      sort(q,q+m);
      int l=0,r=-1;
      for(int i=0;i<m;i++)
      {
        while(l<q[i].x)
        {
          cnt[pref[l]]--;
          res-=cnt[k^pref[l]];
          l++;
        } 
        while(l>q[i].x)
        {
          l--;
          res+=cnt[k^pref[l]];
          cnt[pref[l]]++;
        }
        while(r<q[i].y)
        {
          r++;
          res+=cnt[k^pref[r]];
          cnt[pref[r]]++;
        }       
        while(r>q[i].y)
        {
          cnt[pref[r]]--;
          res-=cnt[k^pref[r]];
          r--;
        }
        ans[q[i].in]=res;
      }
      for(int i=0;i<m;i++) cout<<ans[i]<<"\n";
}
