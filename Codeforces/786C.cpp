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
const ll N=500020;
int a[N];
int n;
int cnt[N];
inline int go(int k)
{
   fill(cnt,cnt+n+1,0);
   int ans=1;
   int d=0;
   int j=1;
   while(j<=n)
   {
     if(cnt[a[j]]==ans){
      j++;
     }
     else{
       d++;
       if(d>k)
       {
         d=0;
         ans++;
         continue;
       }
       cnt[a[j]]=ans;
       j++;
     }
   }
   return ans;
}
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      #endif
      cin>>n;
      for(int i=1;i<=n;i++)
      {
        cin>>a[i];
      }
      int j=n;
      int ans[n+1];
      while(j>=1)
      {
        int cur=go(j);
        int l=1,r=j;
        while(l<r)
        {
          int mid=(l+r-1)>>1;
          if(go(mid)<=cur) r=mid;
          else l=mid+1;
        }
        for(int i=l;i<=j;i++)
        {
          ans[i]=cur;
        }
        j=l-1;
      }
      for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
      //cout<<go(1);
}
