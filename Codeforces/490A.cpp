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
vi p,m,pe;
ll n;
cin>>n;
forn(i,n) {
    ll x;
    cin>>x;
    if(x==1)
    {
        p.pb(i+1);
    }
    else if(x==2)
    {
        m.pb(i+1);
    }
    else pe.pb(i+1);
}
n=min(min(p.size(),m.size()),pe.size());
cout<<n<<"\n";
forn(i,n)
{
    cout<<p[i]<<" "<<m[i]<<" "<<pe[i]<<"\n";
}
return 0;
}
