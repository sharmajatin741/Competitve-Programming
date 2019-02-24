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
ll dp[5005][5005];
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      #endif
      ll n;
      cin>>n;
      vector<ll> a;
      forn(i,n){
         ll x;
         cin>>x;
         if((ll)a.size()==0||a.back()!=x)
          a.pb(x);
      }
      for(ll j=0;j<(ll)a.size();j++)
      {
        for(ll i=j;i>=0;i--)
        {
          if(i==j) dp[i][j]=0;
          else{
            dp[i][j]=1e12;
            if(i+1<=j) dp[i][j]=min(dp[i][j],dp[i+1][j]+1);
            if(j-1>=i) dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
            if(i+1<=j&&j-1>=i&&a[i]==a[j]) dp[i][j]=min(dp[i][j],dp[i+1][j-1]+1); 
          }
        }
      }
      cout<<dp[0][(ll)a.size()-1];
}
/* You are confined only by the walls you build yourself */
