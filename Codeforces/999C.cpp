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
vector<vi> b(26);
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
ll n,k;
cin>>n>>k;
string s;
cin>>s;
ll a[26]={0};
forn(i,n)
{
   a[s[i]-'a']++;
   b[s[i]-'a'].pb(i);
}
for(ll i=0;i<26;i++)
{
	reverse(b[i].begin(),b[i].end());
}
forn(i,k)
{
	for(ll j=0;j<26;j++)
	{
      if(a[j]>0)
      {
      	a[j]--;
        ll m=b[j].size();
        ll pos=b[j][m-1];
        b[j].pop_back();
        s[pos]='$';
        break;
      }
	}
}
forn(i,n)
{
	if(s[i]=='$')
		continue;
	else cout<<s[i];
}
return 0;
}
