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
vector<vi> a(100006);
bool vis[100006];
void dfs(ll node)
{
    if(vis[node]) return;
    vis[node]=true;
    for(auto c: a[node])
    {
        dfs(c);
    }
}
int main()
{ 
ios_base::sync_with_stdio(false);

cin.tie(NULL);
//freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
ll t;
cin>>t;
forn(j,t)
{

    forn(i,100006)
    {
        vis[i]=false;
        a[i].clear();
    }
    ll n,m;
    cin>>n>>m;
    while(m--)
    {
       ll x,y;
       cin>>x>>y;
       a[x].pb(y);
       a[y].pb(x);
    }
    ll ans=0;
    forn(i,n)
    {
        if(!vis[i])
        {
           dfs(i);
           ans++;
        }
    }
    cout<<ans<<"\n";
}
return 0;
}       