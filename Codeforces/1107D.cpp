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
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      #endif
      ll n;
      cin>>n;
      ll a[n][n];
      forn(i,n)
      {
        st s;
        cin>>s;
        ll k=0;
        forn(j,n/4)
        {
          if(s[j]>='0'&&s[j]<='9')
          {
            ll x=s[j]-'0';
            vi p;
            forn(o,4)
            {
              p.pb(x%2);
              x/=2;
            }
            reverse(all(p));
            forn(o,4) a[i][k++]=p[o];
          }
          else{
            ll x=s[j]-'A'+10;
            vi p;
            forn(o,4)
            {
              p.pb(x%2);
              x/=2;
            }
            reverse(all(p));
            forn(o,4) a[i][k++]=p[o];
          }
        }
      }
      ll ans=n;
      forn(i,n)
      {
        ll cnt=1;
        for(ll j=1;j<n;j++)
        {
          if(a[i][j]!=a[i][j-1])
          {
            ans=__gcd(ans,cnt);
            cnt=1;
          }
          else cnt++;
        }
        ans=__gcd(ans,cnt);
      }
      forn(i,n)
      {
        ll cnt=1;
        for(ll j=1;j<n;j++)
        {
          if(a[j][i]!=a[j-1][i])
          {
            ans=__gcd(ans,cnt);
            cnt=1;
          }
          else cnt++;
        }
        ans=__gcd(ans,cnt);
      }
      cout<<ans;
}
// I never lose. I either win or I learn
