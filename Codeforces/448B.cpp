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
typedef string st;
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD = 1e9 + 7 ;
const ll INF=1e17;                                                                                                  
ll mpow(ll a,ll b){a=a%MOD;ll res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b=b>>1;}return res%MOD;}             
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
st a,b;
cin>>a>>b;
ll ch[26]={0};
forn(i,a.length()) ch[a[i]-'a']++;
forn(i,b.length()) ch[b[i]-'a']--;
ll f=0;
forn(i,26)
{
   if(ch[i]) f=1;
}
if(f==0)
{
    cout<<"array";
    return 0;
}
ll p=0;
for(ll i=0;i<a.length()&&p<b.length();i++)
{
    if(a[i]==b[p]) p++;
}
if(p==b.length())
{
    cout<<"automaton";
    return 0;
}
f=0;
forn(i,26)
{
    if(ch[i]<0) f=1;
}
if(f==0)
{
    cout<<"both";
    return 0;
}
cout<<"need tree";
return 0;    
}
