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
ll n,k;
cin>>n>>k;
ll a[n];
forn(i,n) cin>>a[i];
sort(a,a+n);
long double ans=(long double)a[0]-0;
for(ll i=1;i<n;i++)
{
    long double d=(long double)(a[i]-a[i-1])/2;
    ans=max(ans,d);
}
ans=max(ans,(long double)(k-a[n-1]));
cout<<fixed<<setprecision(10)<<ans;
return 0;
}
