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
vector<string> st(200);
map<char,vector<char>> a;
map<char,ll> color;
ll f=true;
vector<char> ans;
map<char,ll> vis;
void dfs(char node)
{
	color[node]=1;
	for(auto c:a[node])
	{
		if(color[c]==0)
		{
			dfs(c);
		}
		else if(color[c]==1)
		{
			f=false;
			return ;
		}
	}
	color[node]=2;
}
void dfs1(char node)
{
	if(vis[node]) return ;
	vis[node]=1;
	for(auto c:a[node])
	{
		if(!vis[c])
		{
			dfs1(c);
		}
	}
	ans.pb(node);
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
ll n;
cin>>n;
forn(i,n)
{
	string s;
    cin>>s;
    st[i]=s;
}
forn(i,n-1)
{
   ll k=0;
   ll len=min(st[i].length(),st[i+1].length());
   while(st[i][k]==st[i+1][k]&&k<len) k++;
   if(k==len)
   {
   	  if(st[i].length()>st[i+1].length())
   	  {
   	  	cout<<"Impossible";
   	  	return 0;
   	  }
     continue;
   }
   a[st[i][k]].pb(st[i+1][k]);
}
for(char a='a';a<='z';a++)
{
	if(color[a]==0)
	{  
       dfs(a);
	}
}
if(!f)
{
	cout<<"Impossible";
	return 0;
}
for(char a='a';a<='z';a++)
{
	if(!vis[a])
	{
		dfs1(a);
	}
}
reverse(all(ans));
for(auto c:ans)
{
	cout<<c;
}
return 0;    
}
