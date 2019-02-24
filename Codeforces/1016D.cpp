/* nothing is impossible */
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
const ll INF=1e14;                                                                                                 
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}             
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
ll n,m;
cin>>n>>m;
ll r[n],c[m];
forn(i,n) cin>>r[i];
forn(i,m) cin>>c[i];
ll a[n][m];
forn(i,n-1)
{
  ll res=0;
  forn(j,m-1)
    a[i][j]=j+1,res=res^a[i][j];
  a[i][m-1]=res^r[i];
}
ll v[m]={0};
forn(i,m)
{
  forn(j,n-1)
  {
   v[i]^=a[j][i];
  }
}
forn(j,m)
{
  a[n-1][j]=v[j]^c[j];
}
ll res=0;
forn(j,m)
{
 res=res^a[n-1][j];
}
if(res==r[n-1])
{
  cout<<"YES\n";
  forn(i,n) 
  {
    forn(j,m) cout<<a[i][j]<<" "; 
    cout<<"\n";
  }
}
else cout<<"NO";
return 0;
}
