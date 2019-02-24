#include <bits/stdc++.h>
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define fi first
#define se second
#define ff first
#define ss second
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
typedef long double ld;
typedef string st;
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD = 1e9 + 7 ;
const ll INF=1e14;
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
const ll N=800005;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  st s;
  cin>>s;
//  cout<<s.length();
  ll k;
  cin>>k;
  ll cnt=0;
  ll r=0;
  forn(i,s.length())
  {
    if(s[i]=='?'||s[i]=='*')
    {
      r++;
      continue;
    }
    cnt++;
  }
  if(cnt==k)
  {
    for(ll i=0;i<s.length();i++)
    {
      if(s[i]=='?'||s[i]=='*') continue;
      cout<<s[i];
    }
    return 0;
  }
  if(cnt>k)
  {
    if(cnt-r>k)
    {
      cout<<"Impossible\n";
      return 0;
    }
    st ans="";
    ll wo=cnt-k;
    for(ll i=0;i<s.length();i++)
    {
      if(s[i]=='?'||s[i]=='*') continue;
      if(i+1<s.length())
      {
        if(s[i+1]=='*'||s[i+1]=='?')
        {
          if(wo)
          {
            wo--;
          }
          else{
            ans+=s[i];
          }
        }
        else{
          ans+=s[i];
        }
      }
      else{
        ans+=s[i];
      }
    }
    cout<<ans;
  }
  else{
    ll cnt1=0;
    forn(i,s.length()) cnt1+=(s[i]=='*');
    if(cnt1==0)
    {
      cout<<"Impossible\n";
      return 0;
    }
    st ans="";
    ll wo=k-cnt;
    forn(i,s.length())
    {
      if(s[i]=='?') continue;
      if(s[i]=='*')
      {
        while(wo) ans+=s[i-1],wo--;
      }
      else ans+=s[i];
    }
    cout<<ans;
  }
}
//nothing is impossible
