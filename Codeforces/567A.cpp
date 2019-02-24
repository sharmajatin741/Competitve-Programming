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
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
vector<pair<ll,ll>>a;
forn(i,n){
    ll k;
    cin>>k;
    a.pb(mp(k,i));
}
sort(all(a));
map <ll,pair<ll,ll>> b;
forn(i,n)
{
    if(i==0)
    {
        b[a[i].second]={abs(a[i+1].fi-a[i].fi),abs(a[n-1].fi-a[i].fi)};
    }
    else if(i==n-1)
    {
        b[a[i].second]={abs(a[i].fi-a[i-1].fi),abs(a[i].fi-a[0].fi)};
    }
    else
     {
        
        b[a[i].second]={min(abs(a[i+1].fi-a[i].fi),abs(a[i].fi-a[i-1].fi)),max(abs(a[i].fi-a[n-1].fi),abs(a[i].fi-a[0].fi))};
    }
}
forn(i,n)
cout<<b[i].first<<" "<<b[i].second<<"\n";
return 0;
}
