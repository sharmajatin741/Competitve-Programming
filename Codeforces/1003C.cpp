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
ll sum[5003];
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
ll n,k;
cin>>n>>k;
ll a[n+1];
for1(i,n) cin>>a[i];
for1(i,n)
{
	sum[i]=sum[i-1]+a[i];
}
long double ans=-1e5;
for(ll i=k;i<=n;i++)
{
   for(ll j=1;j<=n-i+1;j++)
   {
       long double g;
       g=(long double)sum[j+i-1]-sum[j-1];
      /// cout<<g<<" ";
       g=g/i;
       ans=max(ans,g);
   }
}
cout<<fixed<<setprecision(10)<<ans;
return 0;    
}
