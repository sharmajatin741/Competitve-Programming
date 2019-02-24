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
const ll MOD = 1e15 + 37 ;
const ll INF=1e17;																									
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}             
vector<string> a(102);
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
////freopen("input.txt", "r", stdin);
ll n,m;
cin>>n>>m;
forn(i,n)
{
	string s;
	cin>>s;
	a[i]=s;
}
ll ans=0;
forn(i,n)
{
	ll u=0;
	forn(j,m)
	{
		ll k=a[i][j]-'0';
		//cout<<a[i][];
		ll f=1;
		forn(y,n)
		{
			//cout<<"8";
			if(y!=i)
			if(a[y][j]-'0'>k)
			{
				///cout<<"*";
				f=0;
               break;
			}
		}
		if(f)
		{
            u=1;
			break;
		}
	}
	if(u)
	{
		ans++;
	}
}
cout<<ans;
return 0;    
}
