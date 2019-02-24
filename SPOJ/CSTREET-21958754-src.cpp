// 72 72 72 72 72 72 72 72 72 72 72
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
typedef string st;
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD = 1e9 + 7 ;
const ll INF=1e17;                                                                                                  
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}             
ll par[10003];
ll s[10003];
vector<pair<ll,pii>> a;
ll root(ll v){
    while(v!=par[v]) v=par[v];
    return v;
}
void unite(ll v,ll u)
{
    u=root(u); v=root(v);
    if(s[u]>s[v]) swap(u,v);
    s[v]+=s[u];
    par[u]=par[v];
}
bool check(ll v,ll u)
{
    return root(u)==root(v)?false:true;
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
ll t; cin>>t;
while(t--)
{
forn(i,10003)
{
    s[i]=1;
    par[i]=i;
}
ll p;
cin>>p;
ll n,m; cin>>n>>m;
while(m--)
{
    ll x,y,z;
    cin>>x>>y>>z;
    a.pb({z,{x,y}});
}
sort(all(a)); ll ans=0;
for(auto f:a)
{
    ll x,y,z;
    z=f.fi,x=f.se.fi,y=f.se.se;
    ///cout<<x<<" "<<y<<"\n";
    if(check(x,y))
    {
        unite(x,y);
        ans+=z;
    }
}
cout<<ans*p<<"\n";
}
return 0;    
}