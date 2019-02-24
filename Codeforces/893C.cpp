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
ll n,m;
ll vis[100002];
ll mini;
ll c[100002];
vector<vi> a(100002);
void dfs(ll node)
{
    if(vis[node])
        return;
    vis[node]=1;
    if(c[node]<mini)
        mini=c[node];
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
cin>>n>>m;
for1(i,n) cin>>c[i];
forn(i,m)
{
   ll x,y;
   cin>>x>>y;
   a[x].pb(y);
   a[y].pb(x);
}
ll sum=0;
for1(i,n)
{
     if(vis[i]==0)
     {
        mini=INT_MAX;
        dfs(i);
        sum+=mini;
     }
}
cout<<sum;
return 0;
}
