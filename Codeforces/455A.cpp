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
ll f[100001];
ll dp[100001];
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll a[n];
forn(i,n) cin>>a[i],f[a[i]]++;
dp[0]=0;
dp[1]=f[1];
ll ans=-1;
for(ll i=2;i<100001;i++)
{
    dp[i]=max(dp[i-1],dp[i-2]+f[i]*i);
    ans=max(ans,dp[i]);
}
cout<<ans;
return 0;
}
