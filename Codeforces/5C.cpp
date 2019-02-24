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
vi a[3333];
ll b[3333][3333];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 /// freopen("input.txt", "r", stdin);
  st s;
  cin>>s;
  ll n=s.length();
  stack<char> sta;
  stack<ll> pos;
  vector<pii> ans;
  forn(i,n)
  {
    if(s[i]=='(')
    {
      sta.push(s[i]);
      pos.push(i);
    }
    else{
      if(sta.size()==0)
      {
        while(sta.size()!=0) sta.pop();
        while(pos.size()!=0) pos.pop();
      }
      else {
        sta.pop();
          ll f=pos.top();
           ans.pb({f,i});
           pos.pop();
      } 
    }
  }
  ll an=0;
  ll len=0;
  sort(all(ans));
  map<ll,ll> ma;
  map<ll,ll> my;
  for(ll i=0;i<ans.size();i++)
  {
      ma[ans[i].se]=ans[i].se-ans[i].fi+1+ma[ans[i].fi-1];
      an=max(an,ma[ans[i].se]);
      my[ma[ans[i].se]]++;
  }
  if(an==0)
  {
    cout<<"0 1";
    return 0;
  }
  else
  cout<<an<<" "<<my[an];
  return 0;
}
