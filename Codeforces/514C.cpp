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
ll has[1000002];
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
/////freopen("input.txt", "r", stdin);
has[0]=1;
for(ll i=1;i<1000002;i++)
{
	has[i]=(has[i-1]*1009)%MOD;
}
ll n,m;
cin>>n>>m;
vi sys;
for(ll r=0;r<n;r++)
{
	string s;
	cin>>s;
	ll hashi=0;
    for(ll i=0;i<s.length();i++)
    {
    	ll k=s[i]-'a'+1;
       hashi=(hashi+k*has[i+1])%MOD;
    }
    sys.pb(hashi);
}
sort(all(sys));
for(ll t=0;t<m;t++)
{
	string k;
	cin>>k;
	ll hasc=0;
	ll f=0;
	for(ll i=0;i<k.length();i++)
	{
         ll f=k[i]-'a'+1;
         hasc=(hasc+f*has[i+1])%MOD;
	}
	for(ll i=0;i<k.length();i++)
	{
		for(ll j=0;j<3;j++)
		{
		    char d='a'+j;
			if(d!=k[i])
			{
				ll h=k[i]-'a'+1;
				ll y=d-'a'+1;
               ll newhas=hasc-(h)*has[i+1];
                newhas+=(y*has[i+1])%MOD;
               while(newhas<0) newhas+=MOD;
               while(newhas>=MOD) newhas-=MOD;
               if(binary_search(sys.begin(),sys.end(),newhas))
               {
               	f=1;
               	break;
               }
			}
		}
		if(f==1)
		{
			break;
		}
	}
	if(f)
	{
		cout<<"YES\n";
	}
	else cout<<"NO\n";
}
return 0;    
}
