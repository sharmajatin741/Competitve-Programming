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
typedef double ld;
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD = 1e9 + 7 ;
const ll INF=1e17;
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}
bool vis[100001];
vector<vi> a(100001);
long double dfs(ll node)
{
    vis[node]=true;
    long double cnt=0;
    long double sum=0;
    for(auto c:a[node])
    {
    	if(vis[c]) continue;
    	sum+=dfs(c);
    	cnt++;
    }
    long double k;
    if(cnt==0)
    {
      k=0.0;
      return k;
    }
    else 
    k=(long double)sum/cnt;
    return k+1; 
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
ll n;
cin>>n;
forn(i,n-1)
{
	ll x,y;
	cin>>x>>y;
	a[x].pb(y);
	a[y].pb(x);
}
long double ans=dfs(1);
cout<<fixed<<setprecision(12)<<ans;
return 0;
}
