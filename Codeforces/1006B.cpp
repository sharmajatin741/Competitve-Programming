/* nothing is impossible */
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
const ll INF=1e14;                                                                                                 
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}             
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("input.txt", "r", stdin);
ll n,k;
cin>>n>>k;
ll a[n];
ll b[n];
forn(i,n)
{
  cin>>a[i];
  b[i]=a[i];
}
ll an=0;
sort(b,b+n);
map<ll,ll> mapi;
ll cnt=0;
for(ll i=n-1;i>=0&&cnt<k;i--)
{
  cnt++;
  an+=b[i];
  mapi[b[i]]++;
}
vi ans;
ll sz=0;
cnt=0;
forn(i,n)
{
  if(mapi[a[i]]>0&&cnt!=k-1)
  {
    cnt++;
    sz++;
    ans.pb(sz);
    sz=0;
    mapi[a[i]]--;
  }
  else{
    sz++;
  }
}
if(sz>0)
{
  ans.pb(sz);
}
cout<<an<<"\n";
for(auto x:ans)
cout<<x<<" ";
return 0;
}
