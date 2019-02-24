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
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
////freopen("input.txt", "r", stdin);
vi a(4);
forn(i,4)
{
   string s;
   cin>>s;
   a[i]=s.length()-2;
}
ll g=0;
ll ans;
forn(i,4)
{
	///cout<<a[i]<<" ";
	ll f=1;
   forn(j,4)
   {
   	  if(j!=i&&2*a[i]>a[j])
   	  {
   	  	f=0;
   	  	break;
   	  }
   }
   if(f){ g++; ans=i;}
    f=1;
   forn(j,4)
   {
   	  if(j!=i&&a[i]<2*a[j])
   	  {
   	  	f=0;
   	  	break;
   	  }
   }
   if(f) g++,ans=i;
}
///cout<<g;
if(g==1)
{
   cout<<char(ans+'A');
}
else cout<<"C";
return 0;    
}
