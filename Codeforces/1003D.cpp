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
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD = 1e9 + 7 ;
const ll INF=1e17;                                                                                                  
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}             
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
ll n,q;
cin>>n>>q;
map<ll,ll> m;
forn(i,n)
{
    ll x;
    cin>>x;
    m[x]++;
}
while(q--)
{
    ll d;
    cin>>d;
    ll ans=0;
    for(ll i=31;i>=0;i--)
    {
        ll h=1<<i;
        if(m[h]==0) continue;
        if(h>d) continue;
        ll o=d/h;
        ll need=min(m[h],o);
        d-=need*h;
        ans+=need;
    }
    //cout<<ans<<" ";
    cout<<(d==0?ans:-1)<<"\n";
}
return 0;    
}
