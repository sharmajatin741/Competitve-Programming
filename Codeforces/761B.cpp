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
//freopen("input.txt", "r", stdin);
ll n,k;
cin>>n>>k;
ll a[n],b[n];
ll f[n],g[n];
forn(i,n) cin>>a[i];
forn(i,n) cin>>b[i];
forn(i,n-1)
{
   f[i]=a[i+1]-a[i];
}
f[n-1]=(k-a[n-1]+a[0])%k;
forn(i,n-1)
{
   g[i]=b[i+1]-b[i];
}
g[n-1]=(k-b[n-1]+b[0])%k;
forn(i,n)
{
	ll temp=f[n-1];
	for(ll j=n-1;j>0;j--)
		f[j]=f[j-1];
     f[0]=temp;
     ll fl=1;
     forn(j,n)
     {
      if(f[j]!=g[j])
      {
         fl=0;
      }
     }
     if(fl) {
     	cout<<"YES";
     	return 0;
     }
}
cout<<"NO";
return 0;
}
