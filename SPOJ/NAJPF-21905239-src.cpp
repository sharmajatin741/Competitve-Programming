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
ll has[1000020];
ll p= 1007;
ll md=1e9+9;
ll shash[1000020];
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
has[0]=1;
for(ll i=1;i<1000020;i++)
{
	has[i]=(has[i-1]*p)%md;
}
ll t;
cin>>t;
while(t--)
{
	string a,b;
	cin>>a>>b;
    ll phash=0;
    vi ans;
    for(ll i=0;i<b.length();i++)
    {
    	phash=(phash+(b[i]-'a'+1)*has[i])%md;
    }
    shash[0]=0;
    for(ll i=0;i<a.length();i++)
    {
    	shash[i+1]=(shash[i]+(a[i]-'a'+1)*has[i])%md;
    }
    //cout<<phash<<"\n";
    for(ll i=0;i+b.length()-1<a.length();i++)
    {
    	//cout<<"*";
    	//cout<<i;
    	ll currh=(shash[i+b.length()]-shash[i]+md)%md;
    //	cout<<currh<<"\n";
    	if(currh==((phash*has[i])%md))
    	{
    		ans.pb(i);
    	}
    }
    if(ans.size()==0)
    {
    	cout<<"Not Found\n\n";
    	continue;
    }
    cout<<ans.size()<<"\n";
    for(auto c: ans)
    {
    	cout<<c+1<<" ";
    }
    cout<<"\n\n";
}
return 0;    
}