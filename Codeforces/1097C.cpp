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
  ll n;
  cin>>n;
  vector<st> a;
  forn(i,n)
  {
    st s;
    cin>>s;
    stack<char> so;
    for(ll j=0;j<s.length();j++)
    {
      if(s[j]=='(')
      {
        so.push(s[j]);
      }
      else{
        if(so.size()&&so.top()=='(')
        {
          so.pop();
        }
        else{
          so.push(s[j]);
        }
      }
    }
    st ans="";
    while(so.size())
    {
      ans+=so.top();
      so.pop();
    }
    reverse(all(ans));
    bool f=true;
    for(ll i=1;i<ans.size();i++)
    {
      if(ans[i]!=ans[0]) f=false;
    }
    if(f)
    a.pb(ans);
  }
  map<ll,ll> ma;
  ll ans=0;
  for(auto x:a)
  {
    ll sz=(ll)x.size();
    if(x[0]=='(')
    {
      //cout<<"*"<<" "<<ma[-1*sz]<<" ";
      if(ma[-sz]>0)
      {
        ma[-1*sz]--;
        //cout<<"&&&";
        ans++;
      }
      else ma[sz]++;
    }
    else{
      //cout<<"%";
      if(ma[sz]>0)
      {
        ma[sz]--;
        ans++;
      }
      else ma[-1*sz]++; 
    }
    //cout<<x<<" "<<ans<<" "<<sz<<"\n";
  }
  cout<<ans;
}
//nothing is impossible
