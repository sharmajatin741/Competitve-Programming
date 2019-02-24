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
const ll N=1000002;
bool cmp(st a,st b)
{
  return a.length()<=b.length();
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  ll n;
  cin>>n;
  vector<st> s(2*n-2);
  vector<st> so(2*n-2);
  forn(i,2*n-2)
  {
    cin>>s[i];
    so[i]=s[i];
  }
  sort(all(s),cmp);
  st a=s[2*n-3];
  st b=s[2*n-4];
  //cout<<a<<" "<<b<<" ";
  bool f=true;
  for(ll i=1;i<n-1;i++)
  {
    if(a[i]!=b[i-1])
    {
      f=false;
      break;
    }
  }
  if(f)
  {
    st ans=a;
    ans+=b[n-2];
    map<st,ll>ma;
    st ko="";
    vector<st> fo;
    forn(i,n-1)
    {
      ko+=ans[i];
      fo.pb(ko);
      ma[ko]++;
    } 
    st po="";
    map<st,ll> mao;
    //cout<<ans;
    for(ll i=n-1;i>=1;i--)
    {
      po+=ans[i];
      st r=po;
    //  cout<<r<<" ";
      reverse(all(r));
     /// cout<<r<<"\n";
      fo.pb(r);
      mao[r]++;
    }
    sort(all(fo),cmp);
    //return 0;
  //  cout<<ans<<" ";
    ll cnt=0;
    char anso[2*n-2];
    ll cnt1=0;
    forn(i,2*n-2)
    {
      if(ma[so[i]])
      {
        cnt++;
        anso[i]='P';
        ma[so[i]]--;
      }
      else{
        if(mao[so[i]])
        {
          cnt1++;
          anso[i]='S';
          mao[so[i]]--;     
        }
      }
    }    
  
    if(cnt==n-1&&cnt1==n-1)
    {
      forn(i,2*n-2)
      {
        cout<<anso[i];
      }
      return 0;
    }
  }
  f=true;
  for(ll i=1;i<n-1;i++)
  {
    if(b[i]!=a[i-1])
    {
      f=false;
      break;
    }
  } 
  if(f)
  {
    st ans=b+a[n-2];
    map<st,ll>ma;
    st ko="";
    forn(i,n-1)
    {
      ko+=ans[i];
      ma[ko]++;
    }
    forn(i,2*n-2)
    {
      if(ma[so[i]])
      {
        cout<<'P';
      }
      else cout<<'S';
      ma[so[i]]--;
    } 
  }
} 
//nothing is impossible
