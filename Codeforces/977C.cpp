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
void solve()
{
   ll n,k;
   cin>>n>>k;
   ll a[n];
   forn(i,n) cin>>a[i];
   sort(a,a+n);\
   if(k==0)
   {
   	 if(a[0]<2)
   	 {
   	 	cout<<"-1";
   	 	return ;
   	 }
   	 else cout<<"1";
   	 return ;
   }
   /*if(k==n)
   {
   	  if(a[n-1]>1e8)
   	  {
   	  	cout<<"-1";
   	  	return ;
   	  }
   	  else cout<<"1000000009";
   	  return;
   }*/
   for(ll i=k;i<n;i++)
   {
   	if(a[i]<=a[k-1])
   	{
   		cout<<"-1";
   		return ;
   	}
   }
   cout<<a[k-1];
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
///freopen("input.txt", "r", stdin);
solve();
return 0;    
}
