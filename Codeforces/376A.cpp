// 72 72 72 72 72 72 72 72 72 72 72
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
ll n,a[103];
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
string s;
cin>>s;
ll pos;
forn(i,s.length())
{
	if(s[i]=='^')
	{
		pos=i;
		break;
	}
}
ll l=0,r=0;
for(ll i=0;i<pos;i++)
{
	if(s[i]>='1'&&s[i]<='9')
	{
       l+=(s[i]-'0')*(pos-i);
	}
}
for(ll i=pos+1;i<s.length();i++)
{
	if(s[i]>='1'&&s[i]<='9')
	{
      r+=(s[i]-'0')*(i-pos);
	}
}
if(l<r)
{
	cout<<"right";
}
else if(l>r)
{
	cout<<"left";
}
else cout<<"balance";
return 0;    
}
