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
map<int,vector<pii>> ar;
map<int,vector<pii>> ac;
map<int,vector<pii>> diag1;
map<int,vector<pii>> diag2;
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      #endif
      int n,m;
      cin>>n>>m;
      for(int i=0;i<m;i++)
      {
        int x,y;
        cin>>x>>y;
        ar[x].pb({y,i});
        ac[y].pb({x,i});
        diag1[x-y].pb({y+x,i});
        diag2[y+x].pb({x-y,i});
      }
      //forn(i,n){ forn(j,n) cout<<"("<<i<<" "<<j<<")  "; cout<<"\n";}
      int ans[m]={0};
      for(auto b:ar)
      {
        vector<pii> v=b.se;
        sort(all(v));
        int sz=(int)v.size();
        for(ll i=0;i<sz-1;i++)
        {
          ans[v[i].se]++;
          ans[v[i+1].se]++;
        }
      }
      //forn(i,m) cout<<ans[i]<<" ";
      //cout<<"\n";
      for(auto b:ac)
      {
        vector<pii> v=b.se;
        sort(all(v));
        int sz=(int)v.size();
        for(ll i=0;i<sz-1;i++)
        {
          ans[v[i].se]++;
          ans[v[i+1].se]++;
        }
      }
      //forn(i,m) cout<<ans[i]<<" ";
      //cout<<"\n";
      for(auto b:diag1)
      {
        vector<pii> v=b.se;
        sort(all(v));
        int sz=(int)v.size();
        for(ll i=0;i<sz-1;i++)
        {
          ans[v[i].se]++;
          ans[v[i+1].se]++;
        }
      
      }
      for(auto b:diag2)
      {
        vector<pii> v=b.se;
        sort(all(v));
        int sz=(int)v.size();
        for(ll i=0;i<sz-1;i++)
        {
          ans[v[i].se]++;
          ans[v[i+1].se]++;
        }
       
      }
      //forn(i,m) cout<<ans[i]<<" ";
      //cout<<"\n";
      int cnt[9]={0};
      forn(i,m)
      {
        cnt[ans[i]]++;
        //cout<<ans[i]<<" ";
      }
      forn(i,9)
      {
       cout<<cnt[i]<<" ";
      }
}
// I never lose. I either win or I learn
