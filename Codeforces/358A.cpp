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
ll n;
cin>>n;
vector<pii> a;
ll v[n];
forn(i,n)
{
  cin>>v[i];
}
forn(i,n-1){
    a.pb({v[i],v[i+1]});
}
forn(i,n-1)
{
    ll l=a[i].fi;
    ll r=a[i].se;
    if(r<l) swap(l,r);
    forn(j,n-1)
    {
       if(j!=i)
       {
          ll L=a[j].fi;
          ll R=a[j].se;
          if(R<L) swap(R,L);
          if((L>l&&L<r)&&(R<l||R>r)||(R>l&&R<r&&(L<l||L>r)))
          {
            //cout<<i<<" "<<j;
            cout<<"yes";
            return 0;
          }
       }
    }
}
cout<<"no";
return 0;    
}
