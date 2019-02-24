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
if(n==1)
{
	cout<<"yes\n 1 1";
	return 0;
}
ll l=0;
while(a[l]<=a[l+1]&&l<n-1) l++;
ll r=l;
while(a[r]>=a[r+1]&&r<n-1) r++;
sort(a+l,a+r+1);
///forn(i,n) cout<<a[i];
forn(i,n)
{
	if(a[i]>a[i+1])
	{
		cout<<"no";
		return 0;
	}
}
cout<<"yes\n";
cout<<l+1<<" "<<r+1;
return 0;
}
