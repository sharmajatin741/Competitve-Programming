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
  ///freopen("input.txt", "r", stdin);
  st s;
  cin>>s;
  ll n=s.length();
  st ans1;
  forn(i,s.length())
  {
    if(s[i]==s[i+1]&&s[i+1]==s[i+2]&&i+2<n&&i+1<n)
    {
      char c=s[i];
      while(s[i]==c&&i<n) i++;
      i--;
      ans1.pb(c);
      ans1.pb(c);
    }
    else{
      ans1.pb(s[i]);
    }
  }
  st ans2;
  n=ans1.length();
  ll prev=0;
  forn(i,n)
  {
    if(ans1[i]==ans1[i+1]&&i+1<n)
    {
      if(prev==1)
      {
        ans2.pb(ans1[i]);
        prev=0;
      }
      else{
        ans2.pb(ans1[i]);
        ans2.pb(ans1[i]);
        prev=1;
      }
      
      i++;
    }
    else{
      prev=0;
     ans2.pb(ans1[i]);
    }
  }
  cout<<ans2;
  return 0;
}
