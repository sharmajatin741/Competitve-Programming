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
 // freopen("input.txt", "r", stdin);
  st s;
  cin>>s;
  ll a,b;
  cin>>a>>b;
  ll n=s.length();
  ll ans=0;
  ll in=-1;
  ll pre[n];
  ll r=1;
  ll t=0;
  ford(i,n)
  {
    t=(t+(s[i]-'0')*r)%b;
    pre[i]=t;
    r=(r*10)%b;
  }
  forn(i,n-1)
  {
    ll x=s[i]-'0';
    ans=ans*10+x;
    ans=ans%a;
    if(ans==0&&s[i+1]!='0'&&pre[i+1]==0)
    {
      in=i;
      break;
    }
  }
  if(in==-1)
  {
    cout<<"NO";
    return 0;
  }
  cout<<"YES\n";
  for(ll i=0;i<=in;i++)
    cout<<s[i];
  cout<<"\n";
  for(ll i=in+1;i<n;i++)
    cout<<s[i];
  return 0;
}
