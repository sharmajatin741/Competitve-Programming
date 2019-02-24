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
//freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
ll n;
cin>>n;
ll a[n];
forn(i,n) cin>>a[i];
ll ans=INT_MAX;
for(ll i=1;i<n-1;i++)
{
	ll maxi=-1;
	for(ll j=0;j<n-1;j++)
	{
		if(j!=i)
		{
			ll k;
           if(j+1==i)
           {
           	k=a[j+2]-a[j];
           }
           else k=a[j+1]-a[j];
		
		maxi=max(maxi,k);
	   }
	}
 ans=min(ans,maxi);
}
cout<<ans;
return 0;
}
