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
ll n,w;
cin>>n>>w;
ll count=0;
ll maxi=-1;
ll mini=0;
forn(i,n)
{
    ll x;
    cin>>x;
    count+=x;
    mini=min(mini,count);
    maxi=max(maxi,count);
}
mini=-1*mini;
ll ans=w-(maxi<0?0:maxi)-(mini)+1;
//cout<<maxi<<" "<<mini;
if(ans<0)
cout<<"0";
else cout<<ans;
return 0;
}