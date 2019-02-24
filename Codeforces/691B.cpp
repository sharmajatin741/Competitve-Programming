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
////freopen("input.txt", "r", stdin);
char c[17]={'A','O','o','x','X','H','I','M','M','T','U','U','V','v','W','w','Y'};
string s;
cin>>s;
ll n=s.length();
for(ll i=0;i<=n/2;i++)
{
	if(s[i]==s[n-i-1])
	{
		ll f=0;
	   for(ll j=0;j<17;j++)
	   {
	   	if(c[j]==s[i])
	   	{
	   		f=1;
	   		break;
	   	}
	   }
	   if(f==0)
	   {
         cout<<"NIE";
         return 0;
	   }
	}
	else {
		if(s[i]=='b'&&s[n-i-1]=='d'||(s[i]=='d'&&s[n-i-1]=='b')||(s[i]=='q'&&s[n-i-1]=='p')||(s[i]=='p'&&s[n-i-1]=='q'))
		{
			continue;
		}
		else {
			cout<<"NIE";
			return 0;
		}
	}
}
/*if(n%2!=0)
{
	ll f=0;
	for(ll i=0;i<17;i++)
	{
		if(s[n/2]==c[i])
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		cout<<"NIE";
		return 0;
	}
}*/
cout<<"TAK";
return 0;    
}
