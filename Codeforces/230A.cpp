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
bool comp(pair<ll,ll> a,pair<ll,ll>b)
{
    if(a.fi==b.fi)
    return a.se>b.se;
    return a.fi<b.fi;
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m;
cin>>m>>n;
vector<pair<ll,ll>> a(n);
forn(i,n)
{
    ll x,y;
    cin>>x>>y;
    a[i]={x,y};
}
sort(a.begin(),a.end(),comp);
forn(i,n)
{
    if(a[i].fi>=m)
    {
        cout<<"NO";
        return 0;
    }
    else {
        m+=a[i].se;
    }
}
cout<<"YES";
return 0;
}
