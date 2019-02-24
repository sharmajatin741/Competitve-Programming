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
const ll MOD = 1e9 + 7 ;
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
ll n;
cin>>n;
ll a[n];
forn(i,n)
{
	cin>>a[i];
}
ll sum1=0;
ll sum2=0;
ll k=0;
ll b=0,e=n-1;
while(b<=e)
{
	if(a[b]>a[e])
	{
		if(k&1)
		{
			sum2+=a[b];
		}
		else sum1+=a[b];
		b++;
	}
	else{
	if(k&1)
		{
			sum2+=a[e];
		}
		else sum1+=a[e];
		e--;	
	}
	k++;
}
cout<<sum1<<" "<<sum2;
return 0;
}
