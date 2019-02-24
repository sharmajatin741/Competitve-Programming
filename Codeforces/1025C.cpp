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
vi divi(ll n)
{
  vi ans;
  if(n%2==0)
  {
    ans.pb(2);
    while(n%2==0)
    {
      n/=2;
    }
  }
  for(ll i=3;i*i<=n;i+=2)
  {
    if(n%i==0)
    {
      ans.pb(i);
      while(n%i==0) n/=i;
    }
  }
  if(n>2) ans.pb(n);
  return ans;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 // freopen("input.txt", "r", stdin);
  st s;
  cin>>s;
  ll n=s.length();
  s+=s;
  ll ans=1;
  ll cur=1;
  for(ll i=1;i<s.length();i++)
  {
    if(s[i]!=s[i-1])
    {
      cur++;
      ans=max(ans,cur);
    }
    else cur=1;
  }
  cout<<min(ans,n);
  return 0;
}
